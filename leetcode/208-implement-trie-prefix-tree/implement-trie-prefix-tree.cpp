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
    
    void insertRecur(trieNode* current, string word){
        if(word.length()==0){
            current->isTerminal = true;
            return;
        }
        char c = word[0];
        int index = c-'a';
        if(current->children[index] == NULL){
            current -> children[index] = new trieNode(c);
        }
        return  insertRecur(current -> children[index], word.substr(1));
    }

    void insert(string word) {
        return insertRecur(root,word);
    }
    
    bool searchRecur(trieNode* current, string word){
        if(word.length() == 0){
            return current->isTerminal;
        }
        int index = word[0] - 'a';
        if(current -> children[index] == NULL){
            return false;
        }
        return searchRecur(current -> children[index], word.substr(1));
    }

    bool search(string word) {
        return searchRecur(root, word);
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