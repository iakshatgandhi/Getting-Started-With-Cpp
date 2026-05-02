class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int idx){
        if(parent[idx]!=idx){
            parent[idx] = find(parent[idx]);
        }
        return parent[idx];
    }
    void unio(int a, int b){
        int a_rep = find(a);
        int b_rep = find(b);
        if(a_rep == b_rep) return;

        if(rank[a_rep]<rank[b_rep]) parent[a_rep] = b_rep;
        else if(rank[b_rep]<rank[a_rep]) parent[b_rep] = a_rep;
        else{
            parent[b_rep] = a_rep;
            rank[a_rep]++;
        }
    }
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        int n = source.size();
        parent.resize(n);
        rank.resize(n, 0);
        iota(parent.begin(),parent.end(),0);

        for(auto& sw:allowedSwaps){
            unio(sw[0],sw[1]);
        }

        unordered_map<int,vector<int>> groups;
        for(int i=0;i<n;i++){
            groups[find(i)].push_back(i);
        }

        int hamming=0;
        for(auto& g:groups){
            unordered_map<int,int> freq;
            for(int idx : g.second){
                freq[source[idx]]++;
            }

            for(int idx : g.second){
                int val = target[idx];
                if(freq[val]>0) freq[val]--;
                else hamming++;
            }
        }
        return hamming;
    }
};