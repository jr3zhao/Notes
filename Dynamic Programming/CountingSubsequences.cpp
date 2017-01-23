#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX 100001

bool appear[27];
int lastPos[27];
int dp[MAX];
string s;

int main(){
    dp[0] = 0;
    dp[1] = 1;
    cin >> s;
    appear[s[0]-96] = true;
    lastPos[s[0]-96] = 1;
    for(int i = 2;i<=s.length();i++){
            if(!appear[s[i-1]-96]){
                                   dp[i] = (2*dp[i-1] + 1)%10007;
                                   appear[s[i-1]-96] = true;
            }
            else{
                 dp[i] = (2*dp[i-1] - dp[lastPos[s[i-1]-96]-1])%10007;
            }
            lastPos[s[i-1]-96] = i;
    }
    cout << dp[s.length()];
    system("PAUSE");
    return 0;
}
