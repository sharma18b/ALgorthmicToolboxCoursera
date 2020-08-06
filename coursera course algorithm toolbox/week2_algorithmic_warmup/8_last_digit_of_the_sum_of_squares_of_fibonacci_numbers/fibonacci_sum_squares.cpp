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



 ll int fibop(ll int m)
{
    int f1=0,f2=1,f=(f1 + f2)%m;
    f(i,0,m*m-1) {
        f = (f1 + f2)%m;
        f1 = f2;
        f2 = f;
        if (f1 == 0 && f2==1) {return i+1;}
    }
}


ll int fibonacci(ll int lo,ll int m)
{
    ll int z = lo%fibop(m);
    if (z==0) return 0;
    else if (z==1) return 1;
    ll int a[z];
    a[0]= 0 ;
    a[1] =1;
    f(i,2,z) {a[i] = (a[i-1]%m + a[i-2]%m)%m;}
    return a[z];
}


/*int sumi(ll int z)
{
    int t=0;
    while (z>0)
    {
        t +=z%10;
        z/=10;
    }
    if (t/10==0) return t;
    else return sumi(t);
}*/


/* gcd or hcf
ll int gcd(ll int a,ll int b)
{
    if (b==0) return a;
    else return gcd(b,a%b);
}
*/

int a[N],b[N];
vector <int > v;
int main()
{
    ll int n;
    cin >> n ;
    ll int s = fibonacci(n,10);
    ll int w = fibonacci(n+1,10);
    cout << (s*w)%10 << endl;

}
