#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int b[20][30];

int main(){
    memset(b, -1, sizeof(b));
    for(int i = 0;i<20;i++){
            for(int j = 0;j<30;j++) cout << b[i][j];
            
            cout << endl;
    }
    return 0;
}
