#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 201
int dp[MAX][MAX];
int data[MAX];
int n;

int main(){
    n = 1;
    while(n != 0){
            cin >> n;
            for(int i = 1;i<=n;i++){
                    cin >> data[i];
            }
            memset(dp, 0, sizeof(dp));
            for(int length = 2;length<n;length++){
                    for(int i = 1;i <n;i++){
                            int j = i+length;
                            if(j>n) break;
                            for(int k = i+1;k<j;k++){
                                    dp[i][j] = max(dp[i][j], dp[i][k]+dp[k][j]+data[i]+data[k]+data[j]);
                            }
                    }
            }
            if(dp[1][n] != 0) cout << dp[1][n] << endl;
    }
    return 0;
}
