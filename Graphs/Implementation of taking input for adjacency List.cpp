#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N];

int main()
{
   int n, m;
   cin >> n >> m;

   while (m--)
   {
      int v1, v2;
      cin >> v1 >> v2;
      graph[v1].push_back(v2);
      graph[v2].push_back(v1);
   }
}
