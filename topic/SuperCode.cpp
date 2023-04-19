#include <bits/stdc++.h>
 
#define set(p) memset(p,-1,sizeof(p))
#define clr(p) memset(p,0,sizeof(p))
#define ll long long int
#define llu unsigned long long int
#define si(n)                   scanf("%d",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                                   scanf("%s",n)
#define rep(i,a,n) for(i=(a);i<(n);i++)
#define pii pair<int,int>
#define pb(x) push_back(x)
#define v(x) vector<x>
 
using namespace std;
 
ll gcd(ll a,ll b)
{
 ll r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
 
 
ll power(ll x,ll y, ll mod)
{
    ll temp,ty,my;
    // ll mod;
    // mod=1000000007;
    if( y == 0)
        return 1;
    temp = power(x, y/2, mod);
    ty=(temp%mod)*(temp%mod);
    if (y%2 == 0)
    {
        return ty%mod;
    }
    else
    {
        my=(x%mod)*(ty%mod);
        return my%mod;
    }
}


//reverse condition as that of SORT comparator method, bcoz top elemennt is kind of last element 
// of PriorityQ, so if we want maxPQ (max at root node), then add conditonn like a.val<b.val in comparator
 
//for custom priority queue priority_queue< Abhi, vector<Abhi>, Compare)
 
// struct Compare
// {
//     bool operator()(const Abhi &p1, const Abhi  &p2){
//         return p1.first < p2.first;
//     }
// };
 
 
void fastscan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}


 
// bool cmp(struct abhi x,struct abhi y)
// {
//     if(x.val1==y.val1)
//         return x.val2<y.val2;
//     return x.val1<y.val1;
// }


// code time : 9:10 - 9:30 and accpeted


const ll N = 100010;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll i,j,k,t,n,q,m,x,y;

    cout<<"abhi\n";
                       
    return 0;   
}