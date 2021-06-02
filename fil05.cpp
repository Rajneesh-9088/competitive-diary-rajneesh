#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define maxl 10000000
void r_k_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}

int sieve[maxl];
int elimination[maxl];

void sieveBuild(){
	for(int i=0;i<maxl;i++){
		sieve[i] = 1;
		elimination[i] = maxl;
	}

	for(int i=2;i<maxl;i++){
		if(sieve[i]==i){
			for(int j=2*i;j<maxl;j+=i){
				sieve[j] = i;
			}
		}
	}
	return ;
}

void solve() {
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int ai;cin>>ai;
		map<int,int> mp;
		for(int i=0;i<ai;i++){
			int d;cin>>d;
			while(d>1){
				mp[sieve[d]]++;
				d /= sieve[d];
			}
		}
		for(auto it: mp){
			elimination[(it).first] = min(elimination[it.first],it.second);

		}
	}
 // int ans = 0;
	// for(auto e: elimination){
	// 	 if(e!=maxl){
	// 	 	ans += e;
	// 	 }
	// }
	// cout<<ans<<endl;

}


int main()
{
	r_k_p();
		sieveBuild();
		solve();
	
	return 0;    
}