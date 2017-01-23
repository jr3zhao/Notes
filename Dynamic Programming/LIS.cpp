#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 5001
int data[MAX];
int dp[MAX];
int n; 
int ans;

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
            cin >> data[i];
    }
    for(int i = 1;i<=n;i++){
            dp[i] = 1;
            for(int j = 1;j<i;j++){
                    if(data[j] < data[i]) dp[i] = max(dp[i], dp[j] + 1);
                    ans = max(ans,dp[i]);
            }
    }
    cout << ans;
    return 0;    
}
