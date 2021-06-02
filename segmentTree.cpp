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


const int N = 100000+5;

int t[4*N]; //  store sum in in node x 
 
 // node v connected to 2v and 2v+1

void update(int v,int tl,int tr,int id,int val) {

	if(tl==id and tr==id){
		 t[


		 	v] = val;
		 return;
	}

	if(id>tr or id<tl){
		return;
	}

	int tm = (tl+tr)/2;
	update(2*v,tl,tm,id,val);
	update(2*v+1,tm+1,tr,id,val);
	t[v] = t[2*v]+t[2*v+1];

}

//query 
int query(int v,int tl,int tr,int l,int r){
	if(tl>r || tr<l){
		return 0;
	}

	if(l<=tl and tr<=r){
		return t[v];
	}

	int tm = (tl+tr)/2;
	int ans = 0;

	ans += query(2*v,tl,tm,l,r);
	ans +=	query(2*v+1,tm+1,tr,l,r);
	return ans;

}



void solve() {
      update(1,0,N-1,2,5);
      update(1,0,N-1,3,6);
      cout<<query(1,0,N-1,2,3);
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
