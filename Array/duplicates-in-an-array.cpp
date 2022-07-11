class Solution
{
public:
  vector<int> duplicates(int arr[], int n)
  {
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
      m[arr[i]]++;
    }
    int cnt = 0;
    for (auto x : m)
    {
      if (x.second != 1)
      {
        ans.push_back(x.first);
        cnt++;
      }
    }
    if (cnt == 0)
    {
      ans.push_back(-1);
      return ans;
    }
    else
    {
      sort(ans.begin(), ans.end());
      return ans;
    }
  }
};