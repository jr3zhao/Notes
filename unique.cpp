#include <iostream>
#include <algorithm>

using namespace std;

int a[5] = {3,2,1,2,3};

int main(){
    sort(a, a+5);
    cout << unique(a, a+5)-a;
    
    system("pause");
    return 0;
}
