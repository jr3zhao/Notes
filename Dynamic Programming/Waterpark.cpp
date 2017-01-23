#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

#define MAX 10000
int i;
int j;
int n;
int dp[MAX];
vector<int> adj[MAX];

int main(){
    cin >> n;
    int a = 1;
    int b = 1;
    while(a != 0 && b != 0){
            cin >> a >> b;
            adj[b].push_back(a);
    }

    for(i = n, dp[n] = 1;i>=1;i--){
            for(j =0;j<adj[i].size();j++){
                    dp[adj[i][j]] += dp[i];
            }
    }
    
    cout << dp[1];
    return 0;
}
