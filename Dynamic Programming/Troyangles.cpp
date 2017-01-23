#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 2002
int n;
char data[MAX][MAX];
int dp[MAX][MAX];
int sum = 0;

int main(){
    cin >> n;
    for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                    cin >> data[i][j];
            }
    }

    
    for(int i = n;i>=1;i--){
            for(int j = 1;j<=n;j++){
                    if(data[i][j] == '.') dp[i][j] = 0;
                    else{
                         dp[i][j] = min(min(dp[i+1][j-1], dp[i+1][j]), dp[i+1][j+1])+1;
                         }
            }
    }
    
    for(int i = 0;i<=n;i++){
            for(int j = 0;j<=n;j++){
                    sum += dp[i][j];
            }
    }
    
    cout << sum;
    system("PAUSE");
    return 0;
}
