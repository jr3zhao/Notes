#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

struct EDGE {int u, v, w;} road[100002];

#define MAX 10002
#define INF 9999999

int c,r,d, p[MAX], rank[MAX];
int cnt[MAX];
bool des[MAX];


bool cmp(EDGE a, EDGE b){
     return a.w>b.w;
} 

int find(int x){
    if(x!=p[x])  p[x] = find(p[x]);
    
    return p[x];
}

void merge(int x, int y){
     if(rank[x] > rank[y]){
                 p[y] = x;
                 cnt[x] += cnt[y];
     }
     else{
          p[x] = y;
          cnt[y] += cnt[x];
          rank[y] += (rank[x]==rank[y]);
     }
}

int kruskal(){
     sort(road, road+r, cmp);
     for(int i =0,ac =0;ac<c-1;i++){
             int su = find(road[i].u);
             int sv = find(road[i].v);
             if(su == sv) continue;
             merge(su,sv);
             ac++;
             if(cnt[find(su)]==d && find(su) == find(1)){
                     return road[i].w;
             }
     }
}

int main(){
    //freopen("test.txt", "r", stdin);
    cin >> c >> r >> d;
    for(int i = 0;i<r;i++){
            cin >> road[i].u >> road[i].v >> road[i].w;
    }
    for(int i = 0, x;i<d;i++){
            cin >> x;
            des[x] = true;
    }
    for(int i = 1;i<=c;i++){
            p[i]=i;
            rank[i]=0;
            if(des[i]) cnt[i] = 1;
            else cnt[i] = 0;
    }
    cout << kruskal();
    
    system("pause");
    return 0;
} 
