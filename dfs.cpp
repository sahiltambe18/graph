#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int v[9] = {-1};

void bfs(vector<int> g[], int l)
{
    stack<int> q;
    q.push(1);
    v[1] = 1;
    // cout<<1<<" ";
    cout << "bfs : ";
    while (!q.empty())
    {
        int fr = q.top();
        cout << fr << " ";
        q.pop();

        for (auto &i : g[fr])
        {
            if (v[i] != 1)
            {
                q.push(i);
                v[i] = 1;
            }
        }
    }
}

int main()
{
    // vector<pair<int , int>> g[6];
    vector<int> g[9];
    int e;
    cout << "enter number of edges\n";
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cout << "enter edge \n";
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(g, 6);

    return 0;
}