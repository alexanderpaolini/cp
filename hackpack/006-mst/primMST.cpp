int primMST(const vector<vector<pair<int, int>>> &adj, int start = 0)
{
  int n = adj.size();
  vector<bool> inMST(n, false);
  vector<int> minEdge(n, numeric_limits<int>::max());
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  minEdge[start] = 0;
  pq.push({0, start}); // {weight, node}
  int totalWeight = 0;

  while (!pq.empty())
  {
    auto [w, u] = pq.top();
    pq.pop();
    if (inMST[u])
      continue;
    inMST[u] = true;
    totalWeight += w;

    for (auto [v, weight] : adj[u])
    {
      if (!inMST[v] && weight < minEdge[v])
      {
        minEdge[v] = weight;
        pq.push({weight, v});
      }
    }
  }
  return totalWeight;
}