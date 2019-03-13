#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <string>

using namespace std;

struct Node
{
  int freq;
  char c;
  string code;
  struct Node* left;
  struct Node* right;
};

struct Node* createNode(int freq,char c)
{
  // when creating pointers, it should be alloated memory!!!
  struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
  temp->freq = freq;
  temp->c = c;
  temp->code = "";
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

typedef pair<int, struct Node*> pi;

void search(struct Node* root,string cur)
{
  string temp;
  if(root->left == NULL && root->right == NULL && root->c!='x')
  {
    cout<<root->c<<" "<< cur <<endl;
    return;
  }
  if(root->left)
  {
    temp = cur;
    search(root->left,temp+"0");

  }
  if(root->right)
  {
    temp = cur;
    search(root->right,temp+"1");
  }
  return;
}


int main()
{
  priority_queue<pi, vector<pi>,greater<pi>> pq;

  struct Node *node1 = createNode(10,'1');
  struct Node *node2 = createNode(5,'2');
  struct Node *node3 = createNode(2,'3');
  struct Node *node4 = createNode(1,'4');
  struct Node *node5 = createNode(6,'5');

  pq.push(make_pair(node1->freq,node1));
  pq.push(make_pair(node2->freq,node2));
  pq.push(make_pair(node3->freq,node3));
  pq.push(make_pair(node4->freq,node4));
  pq.push(make_pair(node5->freq,node5));

  pair<int, struct Node*> top1;
  pair<int, struct Node*> top2;
  struct Node *left,*right,*root;

  while(pq.size()>0)
  {
    top1 = pq.top();
    pq.pop();
    if(pq.size()>0)
    {
      top2 = pq.top();
      pq.pop();
      struct Node *temp = createNode(top1.first+top2.first,'x');
      if(top1.first <= top2.first)
      {
        left = top1.second;
        right = top2.second;
      }
      else
      {
        left = top2.second;
        right = top2.second;
      }
      temp->left = left;
      temp->right = right;
      pq.push(make_pair(temp->freq,temp));
    }
    else{
      root = top1.second;
    }
  }
  search(root,"");
  return 0;

}
