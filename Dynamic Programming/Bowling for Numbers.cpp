#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 30001
#define MAXK 501

int t, n, k, w;
int pins[MAX];
int dp[MAXK][MAX];
int score[MAX];

int main(){
    cin >> t;
    for(int i = 1;i<=t;i++){
            cin >> n >> k >> w;
            for(int j = 1;j<=n;j++){
                    cin >> pins[j];
            }
            
            for(int j = 1;j<=w;j++){
                    
            }
            
            cout << dp[k][n];
    }
    system("PAUSE");
    return 0;
}
