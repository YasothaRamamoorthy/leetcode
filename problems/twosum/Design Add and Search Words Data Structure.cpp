class WordDictionary {
public:
vector<string> dsa;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        dsa.push_back(word);
    }
    
    bool search(string word) {
              int count=0;
        int n=word.size();
        for(int i=0; i<dsa.size(); i++){
            if(n==dsa[i].size()){
                for(int j=0; j<n; j++){
                    if(dsa[i][j]==word[j]||word[j]=='.'){
                        count++;
                    }
                    else{
                        count=0;
                        break;
                    }
                }
                if(count==n) return true;
            }
        }
        return false;
  
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
