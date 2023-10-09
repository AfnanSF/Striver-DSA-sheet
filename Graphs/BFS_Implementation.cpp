#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(int V, vector<int> adjList[])
{
    vector<int> visited(V + 1, 0);
    visited[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adjList[node]) {

            if (!visited[it]) {
                visited[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adjList[n + 1];
    for (int i = 0; i < m; i++) {
        int element_1, element_2;
        cin >> element_1 >> element_2;
        adjList[element_1].push_back(element_2);
        adjList[element_2].push_back(element_1);
    }

    vector<int> ans = bfs(n, adjList);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
