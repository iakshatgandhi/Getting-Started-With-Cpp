class Solution {
    // Segment Tree for range max query and single point update
    struct SegmentTree {
        vector<int> tree;
        int n;
        SegmentTree(const vector<int>& arr) {
            n = arr.size();
            tree.resize(4 * n);
            build(arr, 0, 0, n - 1);
        }
        void build(const vector<int>& arr, int node, int l, int r) {
            if (l == r) tree[node] = arr[l];
            else {
                int m = (l + r) / 2;
                build(arr, 2*node+1, l, m);
                build(arr, 2*node+2, m+1, r);
                tree[node] = max(tree[2*node+1], tree[2*node+2]);
            }
        }
        void update(int node, int l, int r, int idx, int val) {
            if (l == r) tree[node] = val;
            else {
                int m = (l + r) / 2;
                if (idx <= m) update(2*node+1, l, m, idx, val);
                else update(2*node+2, m+1, r, idx, val);
                tree[node] = max(tree[2*node+1], tree[2*node+2]);
            }
        }
        int query(int node, int l, int r, int target) {
            // Find leftmost index >= target
            if (tree[node] < target) return -1;
            if (l == r) return l;
            int m = (l + r) / 2;
            if (tree[2*node+1] >= target)
                return query(2*node+1, l, m, target);
            else
                return query(2*node+2, m+1, r, target);
        }
    };
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        SegmentTree st(baskets);
        int unplaced = 0;
        for (int fruit : fruits) {
            int idx = st.query(0, 0, n - 1, fruit);
            if (idx == -1)
                unplaced++;
            else
                st.update(0, 0, n - 1, idx, -1); // Mark basket as used
        }
        return unplaced;
    }
};
