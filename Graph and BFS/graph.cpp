#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int v, e;
    int c, d;
    cin >> v >> e;
    int adjmatrix[v][v];
    memset(adjmatrix,0,sizeof(adjmatrix));
    for(int i = 0;i<e;i++){
            cin >> c >> d;
            adjmatrix[c-1][d-1] = 1;
            adjmatrix[d-1][c-1] = 1;
    }
    for(int i = 0;i<v;i++){
            for(int j = 0;j<v;j++){
                    cout << adjmatrix[i][j] << " ";
            }
            cout << endl;
    }
    system("PAUSE");
    return 0;    
} 
