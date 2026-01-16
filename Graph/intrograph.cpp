
// Undirected, Unweighted Graph ->  Adjacency Matrix Representation.

// #include <iostream>
// using namespace std;

// int main() {

//     int n, m;
//     cin >> n >> m;   // n = vertices, m = edges

//     int adj[n+1][n+1];

//     // initialize with 0
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             adj[i][j] = 0;
//         }
//     }

//     // take edges input
//     for(int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u][v] = 1;
//         adj[v][u] = 1;   // undirected graph
//     }

//     // print adjacency matrix
//     cout << "Adjacency Matrix:\n";
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Topic: Undirected Graph -> Adjacency List Representation.

// n = 5 → vertices (1 to 5)

// m = 4 → edges

// Edges:

// 1 ↔ 2

// 1 ↔ 3

// 2 ↔ 4

// 2 ↔ 5

// Terminal Input (Example)
// 5 4
// 1 2
// 1 3
// 2 4
// 2 5

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> adj[n+1];

//     for(int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     cout << "Adjacency List:\n";
//     for(int i = 1; i <= n; i++) {
//         cout << i << " -> ";
//         for(int v : adj[i]) {
//             cout << v << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
