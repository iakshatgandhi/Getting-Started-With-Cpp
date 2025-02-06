class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto v : prerequisites){
            adj[v[0]].push_back(v[1]);
        }

        vector<int> in_degree(numCourses, 0);

        for (int u = 0; u < numCourses; u++)
        {
            for (auto itr = adj[u].begin();itr != adj[u].end(); itr++)
                in_degree[*itr]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++)
            if (in_degree[i] == 0)
                q.push(i);

        int cnt = 0;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            for(int v : adj[u])
                if (--in_degree[v] == 0)
                    q.push(v);

            cnt++;
        }

        if (cnt != numCourses)
        {
            return 0;
        }
        return 1;
    }
};