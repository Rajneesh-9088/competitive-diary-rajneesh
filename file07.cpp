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
      vector<int> v(n+1,0);
      int groupCnt = 0;
      int totalCnt = 0;
      for(int i=2;i<=n;i++){

           if(v[i]==0){
            // v[i] = 1;
                    for(int j=2*i;j<=n;j +=i){
                     v[j] = 1;
                     totalCnt++;
                }
                 groupCnt++;
                
           }

            
      }
      int cnt = 0;
      for(int i=2;i<=n;i++){
         if(v[i]==0){
             cnt++;
         }
      }
      cnt = cnt/2;
      groupCnt += cnt;
      cout<<groupCnt<<endl;

      
      // cout<<cnt<<endl;
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
