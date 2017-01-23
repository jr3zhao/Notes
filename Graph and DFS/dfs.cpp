#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX 1001

int graph[MAX][MAX];
int visited[MAX];
int vNum;
int tot;
int vertex[MAX];

void dfs(int v);

int main(){
    cin >> vNum;
    for(int i = 1;i<=vNum;i++){
            for(int j = 1;j<=vNum;j++){
                    cin >> graph[i][j];
            }
    }
    for(int i = 1;i<=vNum;i++){
             if(!visited[i]){
                             dfs(i);
             }
     }
     for(int i = 1;i<=vNum;i++){
             cout << vertex[i] << endl;
     }
    system("pause");
    return 0;
} 

void dfs(int v){
     vertex[tot++] = v;
     visited[v] = 1;
     for(int i = 1;i<=vNum;i++){
             if(graph[v][i] == 1 && visited[i] == 0){
                            dfs(i);
             }
     }
}

