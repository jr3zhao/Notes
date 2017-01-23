#include <iostream>
#include <algorithm>

using namespace std;

int a[5] = {4,5,2,3,1};

struct STU{
       int age, height, num;
       } stu[3];
}

bool cmp(int a, int b){
     return a > b;
}

int main(){
    stu[0].age=15; stu[0].height = 170; stu[0].num = 1;
    stu[1].age=18; stu[1].height = 158; stu[0].num = 2;
    stu[2].age=14; stu[2].height = 180; stu[0].num = 3;
    
    sort(a, a + 5, cmp);
    for(int i = 0;i<5;i++){
            cout << a[i] << endl;
    }
    system("pause");
    return 0;
}
