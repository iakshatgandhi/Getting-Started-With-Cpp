const int INF = 2e9;
using ll = long long;
class Solution {
public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        long long dist = dijkstra(edges, n, source, destination);
        if (dist < target) return {};
        
        bool ok = dist == target;
        for (auto& e : edges) {
            if (e[2] > 0) continue;
            if (ok) {
                e[2] = INF;
                continue;
            }
            e[2] = 1;  // assign minimal weight to unknown edge
            dist = dijkstra(edges, n, source, destination);
            if (dist <= target) {
                ok = true;
                e[2] += target - dist; // adjust weight to meet target distance exactly
            }
        }
        return ok ? edges : vector<vector<int>>{};
    }
private:
    long long dijkstra(vector<vector<int>>& edges, int n, int src, int dest) {
        vector<vector<pair<int,int>>> graph(n);
        for (auto& e : edges) {
            if (e[2] == -1) continue;
            graph[e[0]].emplace_back(e[1], e[2]);
            graph[e[1]].emplace_back(e[0], e[2]);
        }
        vector<ll> dist(n, LLONG_MAX);
        dist[src] = 0;
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;
        pq.emplace(0, src);

        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (dist[u] < d) continue;
            if (u == dest) break;
            for (auto& [v, w] : graph[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.emplace(dist[v], v);
                }
            }
        }
        return dist[dest];
    }
};