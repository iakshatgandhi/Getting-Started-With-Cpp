class trieNode{
    public: 
    char data;
    trieNode* children[26];
    bool isTerminal = false;

    trieNode(char c){
        this->data = c;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    trieNode* root;
    Trie() {
        root = new trieNode('\0');
    }
    
    void insertRecur(trieNode* current, string word, int counter){
        if(counter == word.length()){
            current->isTerminal = true;
            return;
        }
        int index = word[counter] - 'a';
        if(current->children[index] == NULL){
            current->children[index] = new trieNode(word[counter]);
        }
        insertRecur(current->children[index], word, counter+1);
    }

    void insert(string word) {
        int i=0;
        return insertRecur(root,word,i);
    }
    
    bool searchRecur(trieNode* current, string word, int counter){
        if(counter == word.length()){
            return current->isTerminal;
        }
        int index = word[counter] - 'a';
        if(current -> children[index] == NULL){
            return false;
        }
        return searchRecur(current -> children[index], word, counter+1);
    }

    bool search(string word) {
        int i=0;
        return searchRecur(root, word, i);
    }
    
    bool startsWith(string prefix) {
        trieNode* current = root;
        for(char c : prefix){
            int index = c-'a';
            if(current -> children[index] == NULL){
                return 0;
            }
            current = current -> children[index];
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */