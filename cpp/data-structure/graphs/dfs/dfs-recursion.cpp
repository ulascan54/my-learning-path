#include <iostream>

using namespace std;

void DFS(int u, int A[][8], int n, int visited[8])
{

    if (visited[u] == 0)
    {
        cout << u << ", " << flush;
        visited[u] = 1;
        for (int v = 1; v < n; v++)
        {
            if (A[u][v] == 1 && visited[v] == 0)
            {
                DFS(v, A, n, visited);
            }
        }
    }
}

void clear(int v[8])
{
    for (int i = 0; i < 8; i++)
    {
        v[i] = 0;
    }
}

int main()
{
    int visited[8] = {0};
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    cout << "Vertex: 4 -> " << flush;
    DFS(4, A, 8, visited);
    cout << endl;
    clear(visited);
    cout << "Vertex: 1 -> " << flush;
    DFS(1, A, 8, visited);
    cout << endl;
    clear(visited);
    cout << "Vertex: 3 -> " << flush;
    DFS(3, A, 8, visited);
    cout << endl;
    clear(visited);
    cout << "Vertex: 6 -> " << flush;
    DFS(6, A, 8, visited);
    cout << endl;

    return 0;
}