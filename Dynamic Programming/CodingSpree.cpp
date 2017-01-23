#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 1001

int N, T;
int v[MAX];
int h[MAX];
int dp[MAX][MAX];

int main(){
    cin >> N >> T;
    
    for(int i = 1;i<=N;i++){
            cin >> v[i] >> h[i];
    }
    
    for(int i = 1;i<=N;i++){
            for(int j = 1;j<=T;j++){
                    if(h[i] <= j) dp[i][j] = max((v[i]+dp[i-1][j-h[i]]), dp[i-1][j]);
                    else dp[i][j] = dp[i-1][j];
            }
    }
    
    cout << dp[N][T];
    return 0;    
}
