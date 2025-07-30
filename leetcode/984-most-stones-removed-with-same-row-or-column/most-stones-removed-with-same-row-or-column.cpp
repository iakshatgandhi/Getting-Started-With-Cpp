class Solution {
public:
    void dfs(vector<vector<int>>& graph, int u, unordered_set<int>& seen) {
        for (int v : graph[u])
            if (seen.insert(v).second)
                dfs(graph, v, seen);
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<vector<int>> graph(n);
        unordered_set<int> seen;

        // Build the graph: connect stones sharing row or column
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) {
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }

        int numOfIslands = 0;
        for (int i = 0; i < n; ++i) {
            if (seen.insert(i).second) {
                dfs(graph, i, seen);
                ++numOfIslands;
            }
        }
        return n - numOfIslands;
    }
};