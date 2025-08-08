class Solution {
public:
    double soupServings(int n) {
        if (n >= 4800) return 1.0;  // For large n, probability approaches 1
        int normalized = (n + 24) / 25;
        memo = std::vector<std::vector<double>>(normalized + 1, std::vector<double>(normalized + 1, -1.0));
        return dfs(normalized, normalized);
    }

private:
    std::vector<std::vector<double>> memo;

    double dfs(int a, int b) {
        if (a <= 0 && b <= 0) return 0.5;  // Both soups empty simultaneously
        if (a <= 0) return 1.0;            // Soup A empty first
        if (b <= 0) return 0.0;            // Soup B empty first

        if (memo[a][b] != -1.0) return memo[a][b];

        double result = 0.25 * (dfs(a - 4, b) + dfs(a - 3, b - 1) +
                                dfs(a - 2, b - 2) + dfs(a - 1, b - 3));
        memo[a][b] = result;
        return result;
    }
};
