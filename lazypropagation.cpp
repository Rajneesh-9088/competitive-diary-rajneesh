#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1e9+7;

void r_k_p()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = 100005;
bool lazy[N]; // this make sure who is lazy
int t[4*N];// this store the sum
int upt[4*N]; // update // memory of the man lazy man remeber to add this value to all its leaves

// this is the process of telling the man to remember "val"

void apply(int v,int tl,int tr,int val){
	t[v] += val * (tr-tl+1); // set currect information at node

	if(tl!=tr){
		lazy[v] = true;
		upt[v] = val;
	}
}




void solve() {
      
}
    
int32_t main()
{
    r_k_p();
    int t;cin>>t;
    while(t--){
      solve();
    }
    return 0;    
}
