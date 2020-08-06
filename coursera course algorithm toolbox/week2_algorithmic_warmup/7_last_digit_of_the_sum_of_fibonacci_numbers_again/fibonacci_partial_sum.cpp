#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define pb push_back
const int N = 2e5 + 3;
#define f(i,c,d) for(ll int i=c;i<=d;i++)
#define fr(i,k,m) for (int i=k;i>=m;i--)
using namespace std;
//int a[N],b[N];
vector <int > v;
ll int fib(ll int z)
{
    if (z==0) return 0;
    else if (z==1) return 1;
    ll int a[z];
    a[0]= 0 ;
    a[1] =1;
    f(i,2,z) {a[i] = (a[i-1]%10) + (a[i-2]%10);}
    return (a[z]%10);
}

int sumi(ll int z)
{
    int t=0;
    while (z>0)
    {
        t +=z%10;
        z/=10;
    }
    if (t/10==0) return t;
    else return sumi(t);
}

int lt(ll int z)
{
    int k =  (z+2)%60;
    k = fib(k);
    if (k==0) return 9;
    else return k-1;
}

int main()
{
    ll int z,j;
    cin >> z >> j;
    int w,u = lt(j);
    w = lt(z);
    cout << 10+(w-j) << endl;

return 0;
}
