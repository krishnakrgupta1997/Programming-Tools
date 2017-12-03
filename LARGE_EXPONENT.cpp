#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

#define ms(a, n) memset(a,n,sizeof(a))
#define pb push_back
#define mp make_pair
#define f first
#define se second
const int mod=(int)1e9+7;

ll fpow(ll x,ll y){ll res=1;while(y){if(y&1)res=res*x;res%=mod;y=y>>1;x=x*x;x%=mod;}return res;}
ull ipow(ull base,int exp){ull res=1ULL;while(exp){if(exp&1){res*=(ull)base;}exp>>=1;base*=base;}return res;}

int main(){
	ll var=ipow(438732985487,2);
	cout<<var;
	return 0;
}
