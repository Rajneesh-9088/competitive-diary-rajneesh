#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1e9+7;

void r_k_p()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
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
		upt[v] += val;
	}
}

// assiging the task(by the man) to his both employees
void pushdown(int v,int tl,int tr){
	if(lazy[v]){
		lazy[v] = 0;

		int tm = (tl+tr)/2;
		apply(2*v,tl,tm,upt[v]);
		apply(2*v+1,tm+1,tl,upt[v]);
		upt[v] = 0;
	}
}

void update(int v,int tl,int tr,int l,int r,int val){
	if(tl> r || tr<l){
		return;
	}
	if(l<=tl and tr<=r){ // fully within
		// ask the man remember to it
		apply(v,tl,tr,val);
		return;
	}

	// patial overlap
	// at first remove lazy tag
	pushdown(v,tl,tr); // so that chdrn have currect info

	int tm = (tl+tr)/2;

	update(2*v,tl,tm,l,r,val);
	update(2*v+1,tm+1,tr,l,r,val);

	t[v] = t[2*v] + t[2*v+1];

}

// this is pretty much same except for pushdown operation
int query(int v,int tl,int tr,int l,int r){
	if(tl> r || tr<l){
		return 0;
	}

	if(l<=tl and tr<=r){
		return t[v];
	}

	pushdown(v,tl,tr);

	int tm = (tl+tr)/2;
	int ans = 0;
	ans += query(2*v,tl,tm,l,r);
	ans += query(2*v+1,tm+1,r,l,r);
	return ans;
}



void solve() {
	// v,tl,tr -> 1,0,N-1(length-1);	
      update(1,0,N-1,2,5,3);
      cout<<query(1,0,N-1,1,3);
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
