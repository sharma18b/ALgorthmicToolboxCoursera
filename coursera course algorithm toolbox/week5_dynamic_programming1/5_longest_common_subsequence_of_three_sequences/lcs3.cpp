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

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
    int n = a.size();
    int m = b.size();
    int o = c.size();
    int l[n+1][m+1][o+1];
    f(i,0,n)
    f(j,0,m)
    f(k,0,o)
    {
        if (i==0 || j==0 || k==0) l[i][j][k] = 0;
        else if (a[i-1]==b[j-1] && a[i-1]==c[k-1]) l[i][j][k] = 1 + l[i-1][j-1][k-1];
        else {
            l[i][j][k] = max(l[i-1][j][k],max(l[i][j-1][k],l[i][j][k-1]));
        }

    }
  return l[n][m][o];
}

int main() {
  size_t an;
  std::cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    std::cin >> a[i];
  }
  size_t bn;
  std::cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    std::cin >> b[i];
  }
  size_t cn;
  std::cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    std::cin >> c[i];
  }
  std::cout << lcs3(a, b, c) << std::endl;
}
