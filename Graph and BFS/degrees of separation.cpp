#include <cstdlib>
#include <iostream>
#include <queue>

using namespace std;

#define MAX 51

int graph[MAX][MAX];


int numFriends(int person){
    int count = 0;
    for(int i = 0;i<MAX;i++){
            if(graph[person][i] == 1) count++;
    }
    return count;
}

int numFF(int person){
    int count = 0;
    bool friends[MAX];
    bool vi[MAX];
    memset(friends,false,sizeof(friends));
    memset(vi,false,sizeof(vi));
    for(int i = 0;i<MAX;i++){
            if(graph[person][i] == 1){
                                friends[i] = true;
                                vi[i] = true;
            }
    }
    for(int i = 0;i<MAX;i++){
            if(friends[i]){
                           for(int j = 0;j<MAX;j++){
                                   if(graph[i][j] == 1 && !vi[j]) count++;
                                   vi[j] = true;
                           }
            }
    }
    return count;
}

queue<int> Q;
bool visited[MAX];
int step[MAX];
void degSep(int x, int y){
     Q.push(x);visited[x] = true;step[x] = 0;

     while(!Q.empty()){
                       int cur = Q.front();
                       Q.pop();
                       for(int i = 0;i<MAX;i++){
                               if(!visited[i] && graph[cur][i]){
                                               visited[i] = true;step[i] = step[cur]+1;Q.push(i);
                                               if(i == y) break;
                               }
                               }
                                          
     }
     if(visited[y]) {
                    cout << step[y] << endl;
     }
     else cout <<  "Not connected" << endl;
}

int main(){
    memset(graph, 0, sizeof graph);
    graph[1][6] = 1;
    graph[6][1] = 1;
    graph[2][6] = 1;
    graph[6][2] = 1;
    graph[3][6] = 1;
    graph[6][3] = 1;
    graph[3][4] = 1;
    graph[4][3] = 1;
    graph[3][5] = 1;
    graph[5][3] = 1;
    graph[3][15] = 1;
    graph[15][3] = 1;
    graph[4][6] = 1;
    graph[6][4] = 1;
    graph[4][5] = 1;
    graph[5][4] = 1;
    graph[5][6] = 1;
    graph[6][5] = 1;
    graph[6][7] = 1;
    graph[7][6] = 1;
    graph[7][8] = 1;
    graph[8][7] = 1;
    graph[8][9] = 1;
    graph[9][8] = 1;
    graph[9][10] = 1;
    graph[10][9] = 1;
    graph[9][12] = 1;
    graph[12][9] = 1;
    graph[10][11] = 1;
    graph[11][10] = 1;
    graph[11][12] = 1;
    graph[12][11] = 1;
    graph[12][13] = 1;
    graph[13][12] = 1;
    graph[13][14] = 1;
    graph[14][13] = 1;
    graph[13][15] = 1;
    graph[15][13] = 1;
    graph[16][17] = 1;
    graph[17][16] = 1;
    graph[16][18] = 1;
    graph[18][16] = 1;
    graph[17][18] = 1;
    graph[18][17] = 1;
    char c = 'a';
    int x,y;
    while(true){
              cin >> c;
              if(c == 'q') break;
              else if(c == 'i'){
                   cin >> x;
                   cin >> y;
                   graph[x][y] = 1;
                   graph[y][x] = 1;
              }else if(c == 'd'){
                    cin >> x;
                    cin >> y;
                    graph[x][y] = 0;
                    graph[y][x] = 0;
              }else if(c == 'n'){
                    cin >> x;
                    cout << numFriends(x) << endl;
              }else if(c == 'f'){
                    cin >> x;
                    cout << numFF(x) << endl;
              }else if(c == 's'){
                    cin >> x;
                    cin >> y;
                    degSep(x,y);
              }
    }
    return 0;
} 
