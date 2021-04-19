#include <iostream>
#include <queue>
using namespace std;

void bfs(int **adj, int v)
{
    bool visited[100];
    for (int i = 0; i < 100; i++)
        visited[i] = false;

    queue<int> que;

    que.push(0);
    visited[0] = true;

    while (!que.empty())
    {
        int x = que.front();
        printf("%d ", x);
        que.pop();

        for (int i = 0; i < v; i++)
            if (adj[x][i] == 1 && !visited[i])
            {
                visited[i] = true;
                que.push(i);
            }
    }
}

int main()
{
    int v;
    cin >> v;

    int **adj = new int *[100];

    for (int i = 0; i < v; i++)
    {
        adj[i] = new int[v];
        for (int j = 0; j < v; j++)
            cin >> adj[i][j];
    }

    bfs(adj, v);
}