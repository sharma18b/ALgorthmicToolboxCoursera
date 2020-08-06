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
using std::string;

int edit_distance(const string &str1, const string &str2) {
    int n = str1.length();
    int m = str2.length();
    int d[n+1][m+1];
    f(i,0,n) d[i][0]= i;
    f(i,0,m) d[0][i] =i;
    f(j,1,m)
    f(i,1,n)
    {
        int insertion = d[i][j-1]+1;
        int deletion = d[i-1][j] +1;
        int match = d[i-1][j-1];
        int mism =  d[i-1][j-1] + 1;
        if (str1[i]==str2[j]) d[i][j] = min(insertion,min(deletion,match));
        else d[i][j] = min(insertion,min(deletion,mism));
    }
    return d[n][m];
}


int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
