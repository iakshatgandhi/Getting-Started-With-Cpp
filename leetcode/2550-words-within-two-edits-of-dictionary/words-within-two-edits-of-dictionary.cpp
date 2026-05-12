class trieNode {
public:
    trieNode* children[26];
    bool isEndOf = false;

    trieNode(){
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isEndOf = false;
    }
};
class Solution {
public:
    trieNode* root = new trieNode();

    void insert(string& word){
        trieNode* node = root;
        for (char ch : word) {
            int idx = ch-'a';
            if(node->children[idx]==NULL){
                node -> children[idx] = new trieNode();
            }
            node = node->children[idx];
        }
        node->isEndOf = true;
    }

    bool dfs(trieNode* node, string& query, int idx, int misMatched){
        if(misMatched>2){
            return false;
        }
        if(idx == query.size()){
            return node->isEndOf;
        }

        int currentCar = query[idx]-'a';
        for(int i=0;i<26;i++){
            if(node->children[i]!=NULL){
                int newMismatch = misMatched;
                if(i != currentCar){
                    newMismatch++;
                }
                if(dfs(node->children[i],query,idx+1,newMismatch)){
                    return true;
                }
            }
        }
        return false;
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        for (string& word : dictionary) {
            insert(word);
        }

        vector<string> result;
        for (string& query : queries) {

            if (dfs(root, query, 0, 0)) {
                result.push_back(query);
            }
        }

        return result;
    }
};