#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
public: 
    unordered_map<int, list<int>> adjList;
    //an unordered_map named adjList which will store the adjacency list representation of the graph. The keys of the map are integers representing the vertices, and the corresponding values are lists of integers representing adjacent vertices.
    void addEdge(int u, int v, bool bidir = true) {
        adjList[u].push_back(v);
        if (bidir) {
            adjList[v].push_back(u);
        }
    }

    //here bidir is the flag to check if the graph is bidirectional or not
    // if it is bidirectional then we will add the edge from v to u as well bidirectional means undirected graph

    void printAdjList() {
        for (auto i : adjList) {
            cout << i.first << " -> ";
            for (int entry : i.second) {
                cout << entry << ", ";
            }
            cout << endl;
        }
    }
    /* for (auto i : adjList): This is a range-based for loop that iterates over each element in the adjList. Here, i is a pair where i.first is the key (vertex) and i.second is the associated list of adjacent vertices.

    cout << i.first << " -> ";: This prints the current vertex (key) followed by the arrow (->) to indicate the start of the list of its adjacent vertices.

    for (int entry : i.second): Another range-based for loop that iterates over the list of adjacent vertices (i.second) for the current vertex.

    cout << entry << ", ";: Prints each adjacent vertex, followed by a comma and a space.

    After printing all adjacent vertices, cout << endl; adds a newline to move to the next line for the next vertex.
    */
};

int main() {
    cout<<"enter the value of n and m"<<endl;
    int n, m;
    cin >> n >> m;
    
    graph g;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // creating n undirected graph default bool parameter is true only.
        g.addEdge(u, v);
    }

    g.printAdjList();
    return 0;
}

// what is m and n?
// m is the number of edges in the graph and n is the number of vertices in the graph.
//why the loop is running for m times?
//The loop runs m times because we are taking m edges as input, and for each edge, we add it to the adjacency list using the addEdge function.