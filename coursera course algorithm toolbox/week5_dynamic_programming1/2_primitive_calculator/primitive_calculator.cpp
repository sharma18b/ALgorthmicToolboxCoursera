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

vector<int >  dyn(int n)
{
    vector<int > a(n+1);
    vector<int > seq;
    a[1] = 1;
    for (int i = 2;i<a.size();i++)
    {
        int temp1,temp2 = INT_MAX,temp3=INT_MAX;
        temp1 = a[i-1] + 1;
        if (i%2==0) temp2 = a[i/2] + 1 ;
        if (i%3==0) temp3 = a[i/3] + 1 ;
        a[i] = min(temp1,min(temp2,temp3));
    }
    //return ci;
    int i = n;
    seq.pb(n);
    while (i!=1)
    {
        if (i%3==0 && a[i]-1==a[i/3]) {seq.pb(i/3);i=i/3;}
        else if (i%2==0 && a[i]-1==a[i/2]) {seq.pb(i/2);i=i/2;}
        else
        {
            seq.pb(i-1);
            i--;
        }
    }
    return seq;

}


int main() {
  int n;
  std::cin >> n;
  //vector<int > g;
  vector<int> sequence = dyn(n);
  std::cout << sequence.size() - 1 << std::endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    std::cout << sequence[i] << " ";
  }
}
