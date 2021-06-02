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
 
 
 
void solve() {
    int n;cin>>n;
 int sz    = 2*n;
   int v[sz];
    int x;
    for(int i=0;i<sz;i++){
     cin>>v[i];
    	
    }
int first = 1;
 
    sort(v,v+sz);
  int i = 0;
  int j= sz-1;
  while(i<=j){
  	  if(first){
  	  	cout<<v[i]<<" ";
  	  	first = 0;
  	  	i++;
  	  }else{
  	  	cout<<v[j]<<" ";
  	  	j--;
  	  	first = 1;
  	  }
  }
  cout<<endl;
 
   
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