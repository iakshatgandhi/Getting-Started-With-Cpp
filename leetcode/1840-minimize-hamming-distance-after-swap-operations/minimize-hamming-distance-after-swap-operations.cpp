class Solution {
public:
    vector<int> parent;

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // path compression
        return parent[x];
    }

    void unite(int a, int b) {
        parent[find(a)] = find(b);
    }
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size();
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0); // parent[i] = i

        for (auto& sw : allowedSwaps)
            unite(sw[0], sw[1]);

        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++)
            groups[find(i)].push_back(i);

        int hamming = 0;
        for (auto& [root, indices] : groups) {
            unordered_map<int, int> srcCount;
            for (int i : indices)
                srcCount[source[i]]++;

            for (int i : indices) {
                int t = target[i];
                if (srcCount.count(t) && srcCount[t] > 0)
                    srcCount[t]--;
                else
                    hamming++;
            }
        }

        return hamming;
    }
};