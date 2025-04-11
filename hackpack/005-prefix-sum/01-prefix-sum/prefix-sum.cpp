vector<int> prefix_sum(vector<int> a)
{
    vector<int> ps (a.size());

    ps[0] = a[0];
    for (int i = 1; i < a.size(); i++)
        ps[i] = ps[i - 1] + a[i];

    return ps;
}