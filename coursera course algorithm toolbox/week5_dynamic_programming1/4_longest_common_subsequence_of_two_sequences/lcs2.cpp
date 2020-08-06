#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define pb push_back
const int N = 2e5 + 3;
#define f(i,c,d) for(int i=c;i<=d;i++)
#define fr(i,k,m) for (int i=k;i>=m;i--)
using namespace std;
using std::vector;

int lcs2(vector<long long int> &a, vector<long long int> &b) {
  vector<long int > c;
  int n = a.size();
  int m = b.size();
  int l[n+1][m+1];
  f(i,0,n)
  f(j,0,m)
  {
      if (i==0 || j==0) l[i][j] = 0;
  else if (a[i-1]==b[j-1])
  {
      l[i][j] = l[i-1][j-1] + 1;
  }
  else l[i][j] = max(l[i][j-1],l[i-1][j]);}
  return l[n][m];
  //return std::min(std::min(a.size(), b.size()), c.size());
}

int main() {
  size_t n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<long long int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
