#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int vertices; // Number of vertices
    vector<vector<int>> adjMatrix; // Adjacency matrix

public:
    // Constructor
    Graph(int v) {
        vertices = v;
        adjMatrix.resize(v, vector<int>(v, 0)); // Initialize matrix with 0s
    }

    // Function to add an edge
    void addEdge(int src, int dest) {
        if (src >= vertices || dest >= vertices || src < 0 || dest < 0) {
            cout << "Invalid edge!" << endl;
            return;
        }
        adjMatrix[src][dest] = 1; // For directed graph
        adjMatrix[dest][src] = 1; // Uncomment this line for undirected graph
    }

    // Function to display the adjacency matrix
    void display() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numVertices, numEdges;

    cout << "Enter the number of vertices: ";
    cin >> numVertices;

    Graph g(numVertices);

    cout << "Enter the number of edges: ";
    cin >> numEdges;

    for (int i = 0; i < numEdges; i++) {
        int src, dest;
        cout << "Enter edge (source destination): ";
        cin >> src >> dest;
        g.addEdge(src, dest);
    }

    g.display();

    return 0;
}
