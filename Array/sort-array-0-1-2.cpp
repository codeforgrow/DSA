// O(N)
class Solution
{
public:
  void segregateElements(int arr[], int n)
  {
    // Your code goes here
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < 0)
        v1.push_back(arr[i]);
      else
        v2.push_back(arr[i]);
    }
    int lenght_j = v2.size();
    for (int i = 0; i < v2.size(); i++)
    {
      arr[i] = v2[i];
    }
    for (int i = 0; i < v1.size(); i++)
    {
      arr[i + lenght_j] = v1[i];
    }
  }
};

// Solution 2
void sort012(int a[], int n)
{
  if (n == 1)
    return;
  int low, mid, high;
  low = 0;
  mid = 0;
  high = n - 1;
  int temp;
  while (mid <= high)
  {
    if (a[mid] == 0)
    {
      temp = a[low];
      a[low] = a[mid];
      a[mid] = temp;
      low++;
      mid++;
    }
    else if (a[mid] == 1)
    {
      mid++;
    }
    else
    {
      temp = a[mid];
      a[mid] = a[high];
      a[high] = temp;
      high--;
    }
  }
}
