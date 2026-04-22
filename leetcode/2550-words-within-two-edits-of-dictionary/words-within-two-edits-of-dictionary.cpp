class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> result;
        for (const string& query : queries) {
            bool found = false;
            for (const string& word : dictionary) {
                int diff = 0;

                for (int i = 0; i < query.size(); i++) {
                    if (query[i] != word[i]) diff++;
                    if (diff > 2) break; // early exit
                }

                if (diff <= 2) {
                    found = true;
                    break; // no need to check more dictionary words
                }
            }
            if (found) result.push_back(query);
        }
        return result;
    }
};