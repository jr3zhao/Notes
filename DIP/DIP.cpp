#include <iostream>

using namespace std;

int main(){
    int n;
    int longest = 0;
    int cnt1 = 0, cnt2 = 0;
    cin >> n;
    int data[n];
    for(int i = 0;i<n;i++){
            cin >> data[i];
    }
    for(int i = 0;i<n;i++){
            cnt1 = 0;
            cnt2 = 0;
            bool dip = false;
            for(int j = i;j<n-1;j++){
                    if(data[j] > data[j+1]) cnt1++;
                    else if(data[j] < data[j+1]){
                         cnt2++;
                    }
                    
            }
            if(cnt1==cnt2) longest = max(longest,cnt1*2 + 1);
    }
    cout << longest << endl;
    system("PAUSE");
    return 0;
}
