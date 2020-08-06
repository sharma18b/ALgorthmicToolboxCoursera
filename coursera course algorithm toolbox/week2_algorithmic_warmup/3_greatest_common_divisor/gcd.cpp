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
/* ll int fibonacci(int z)
{
    if (z==0) return 0;
    else if (z==1) return 1;
    ll int a[z];
    a[0]= 0 ;
    a[1] =1;
    f(i,2,z) {a[i] = a[i-1] + a[i-2];}
    return a[z];
}*/
ll int gcd(ll int a,ll int b)
{
    if (b==0) return a;
    else return gcd(b,a%b);
}
int a[N],b[N];
vector <int > v;
int main()
{
    ll int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

return 0;

}
