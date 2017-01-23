#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define MAX 5281

int dp[MAX];
int d, n;
int club[33];
int cnt;

int main(){
    cin >> d;
    cin >> n;
    for(int i = 1;i<=n;i++){
            cin >> club[i];
    }
    for(int i = 1;i<=n;i++){
            cnt = 0;
            for(int j = club[i];j<=d;j+=club[i]){
                    if(dp[j] != 0) dp[j] = min(dp[j], 1+cnt);
                    else dp[j] = 1+cnt;
                    cnt++;
            }
            for(int j = 1;j<=d;j++){
                    dp[j] = min(dp[j], dp[j-club[i]]+1);
            }
    }

    cout << dp[d];
    system("pause");
    return 0;
}
