class BrowserHistory {
private:
    int curr = 0;
    vector<string> history;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
    }
    
    void visit(string url) {
        for(int i = history.size()-1; i >= curr+1 ; i--){
            history.pop_back();
        }
        history.push_back(url);
        curr++;
        cout<<history[curr]<<endl;
    }
    
    string back(int steps) {
        curr = curr-steps;
        if(curr < 0){
            curr = 0;
        }

        return history[curr];
    }
    
    string forward(int steps) {
        curr = curr+steps;
        if(curr >= history.size()){
            curr = history.size()-1;
        }

        return history[curr];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
