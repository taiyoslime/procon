#include <bits/stdc++.h>
using namespace std;
int main(){
      int tmp,dp[31];
      cin >> tmp;
      do{
            fill(dp,dp+31,0);
            dp[0] = 1;
            for (int i = 0; i<tmp;i++){
                  for(int j = 1;j < 4;j++)
                        dp[i+j] += dp[i];
            }
            cout << dp[tmp]/3650 + 1<<endl;
            cin >> tmp;
      }while(tmp);
}
