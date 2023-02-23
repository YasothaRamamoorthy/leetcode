class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();

        vector<pair<int,int>> project;

        for(int i=0;i<n;i++)
        {
            project.emplace_back(capital[i],profits[i]);
        }
        sort(project.begin(),project.end());

        priority_queue<int> project_main;

        int ptr=0;

        for(int i=0;i<k;i++)
        {
            while(ptr<n && project[ptr].first <=w)
            {
                project_main.push(project[ptr++].second);
            }
            if(project_main.empty())
            break;
            w+=project_main.top();
            project_main.pop();
        }
return w;
    }
};
