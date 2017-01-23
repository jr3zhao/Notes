#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 1001

int dp[MAX][MAX];
int data[MAX];

int sum(int i, int j){
    int s = 0;
    for(int a = i;a<=j;a++){
            s += data[a];
    }
    return s;
}

//dp[i][j] = (ai....aj) - min(dp[i+1][j], dp[i][j-1]);
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
            cin >> data[i];
    }
    for(int i = 1;i<=n;i++){
            dp[i][i] = data[i];
    }
    for(int j = 1;j<n;j++){
    for(int i = n-j;i>=1;i--){
            dp[i][i+j] = sum(i, i+j) - min(dp[i+1][i+j], dp[i][i-1+j]);
    }
    /*for(int i = n-2;i>=1;i--){
            dp[i][i+2] = sum(i, i+2) - min(dp[i+1][i+2], dp[i][i+1]);
    }
    for(int i = n-3;i>=1;i--){
            dp[i][i+3] = sum(i, i+3) - min(dp[i+1][i+3], dp[i][i+2]);
    }*/
    }
    /*for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                    cout << dp[i][j] << " ";
            }
            cout << endl;
    }*/
    cout << dp[1][n];

    return 0;
}
