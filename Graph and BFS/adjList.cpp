#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;

#define MAX 100

vector<int> adjList[MAX];

queue<int> Q;
bool visited[MAX];
int step[MAX];

void bfs(int v){
     Q.push(v);
     visited[v] = true;
     step[v] = 0;
     cout << v + 1;
     while(!Q.empty()){
                       v = Q.front();
                       Q.pop();
                       for(int i = 0;i<adjList[v].size();i++){
                               int u = adjList[v][i];
                               if(!visited[u]){
                                               visited[u] = true;
                                               step[i] = step[u]+1;
                                               cout << u + 1;
                                               Q.push(u);
                               }
                       }
                                          
     }
}

int main(){
    int V, E;
    int a, b;
    cin >> V >> E;
    
    for(int i = 0;i<E;i++){
            cin >> a >> b;
            adjList[a-1].push_back(b-1);
            adjList[b-1].push_back(a-1);
    }
    for(int i = 0;i<V;i++){
            cout << i+1 << ": "; 
            for(int j = 0;j<adjList[i].size();j++){
                    cout << adjList[i][j]+1 << " ";
            } 
            cout << endl;
    }
    bfs(0);
    cout << endl;
    system("pause");
    return 0;    
}
