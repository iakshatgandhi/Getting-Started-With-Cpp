#include<iostream>
using namespace std;

int main()
{
    // n is the number of vertices
    // m is the number of edges
    int n, m;
    cin >> n >> m;
    int adjMat[n + 1][n + 1] = {{0}};
    //The size of the adjacency matrix should be int adjMat[n + 1][n + 1] instead of int adjMat[n + 1][m + 1]. The number of columns should be based on the number of vertices (n), not the number of edges (m).
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
    
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}