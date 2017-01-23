#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX 100000

int dp[MAX];
int data[MAX];


int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
            cin >> data[i];
    }
    
    dp[0] = 0;
    dp[1] = data[1];
    for(int i = 2;i<=n;i++){
            dp[i] = max(data[i]+dp[i-2], dp[i-1]);
    }
    
    cout << dp[n];
    return 0;
}
