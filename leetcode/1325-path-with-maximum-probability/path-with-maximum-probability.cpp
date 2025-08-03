class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0], v = edges[i][1];
            double p = succProb[i];
            graph[u].emplace_back(v, p);
            graph[v].emplace_back(u, p);
        }
        
        vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;
        // Max-heap: pair<probability, node>
        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start_node});
        
        while (!pq.empty()) {
            auto [prob, node] = pq.top(); pq.pop();
            if (node == end_node) return prob;
            for (auto& [next, edgeProb] : graph[node]) {
                double newProb = prob * edgeProb;
                if (newProb > maxProb[next]) {
                    maxProb[next] = newProb;
                    pq.push({newProb, next});
                }
            }
        }
        return 0.0;
    }
};