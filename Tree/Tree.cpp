#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

typedef struct node *nodeptr;

struct node{
       char value;
       nodeptr left;
       nodeptr right;      
};

void create(node *&root){
     char ch;
     cin >> ch;
     if(ch == '#') root = NULL;
     else{
          root = new node();
          root->value = ch;
          create(root->left);
          create(root->right);
     }
}

void preOrder(node *root){ 
     if(root){
          cout << root->value << endl;
          preOrder(root->left);
          preOrder(root->right);
     }
}

int depth(node *root){
    if(root == NULL) return 0;
    int hl = depth(root->left);
    int hr = depth(root->right);
    return 1 + max(hl,hr);
}

queue<char> que;

void path(node *root, char target){
      if(root){
               que.push(root->value);
               if(root->value == target){
                              for(int i = que.size()-1;i>=0;i--){
                                      cout << que.front() << endl;
                                      que.pop();
                              }
               return;
               }
               if(root->left == NULL && root->right == NULL){
                             for(int i = que.size()-1;i>=0;i--){
                                      que.pop();
                              }
               }
               path(root->left,target);
               path(root->right,target);
      }
}

int main(){
    node *root;
    create(root);
    preOrder(root);
    cout << depth(root) << endl;
    path(root,'E');
    system("PAUSE");
    return 0;
}
