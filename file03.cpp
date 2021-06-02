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
   set<int> s;
   int oneO;
   oneO  = 11;
   int p = 10;
   vector<int> v(10);
   for(int i=0;i<10;i++)   {
        // s.insert(oneO);
        v[i] = oneO;
     // cout<<oneO<<" ";
        oneO = oneO*p;
        oneO++;
        
   }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
 
int n;cin>>n;
 
 for(auto e1: v){
     int ans = n%e1;
     if(ans==0){
        cout<<"YES"<<endl;
        return;
     }
     for(auto e2: v){
        if(ans%e2==0){
            cout<<"YES"<<endl;
            return;
        }
     }
 }
 cout<<"NO"<<endl;
 return;
 
 
 
 
   
   
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