pair<long long, long long> getMinMax(long long a[], int n)
{
  long long max = 999999;
  long long min = 0;
  pair<long long, long long> Pair;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > min)
      min = a[i];
    if (a[i] < max)
      max = a[i];
  }
  Pair = make_pair(max, min);
  return Pair;
}