#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <fstream>

using namespace std;
#define INF 1<<29
#define MAX 100

int V, E, a, b,weight,count;
int graph[MAX][MAX];
int edges[MAX];

int main(){
    ifstream fin ("test.txt");
    for(int i=0;i<MAX;i++){
          for(int j=0;j<MAX;j++){
                                graph[i][j]=INF;
                             }
    }
    fin >> V >> E;
    for(int i = 0;i<E;i++){
            fin >> a >> b >> weight;
            graph[a-1][b-1] = weight;
            graph[b-1][a-1] = weight;
            edges[i] = weight;
    }
    
    for(int i = 0;i<E;i++){
            int min;
            for(int j = i;j<E;j++){
                    
            }
    }
    
    system("PAUSE");
    return 0;
}
