#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

class Node
{
public:
  int data;
  class Node* next;
};

void forwardPrint(struct Node* head){
    if (head == NULL)
        return;
    cout<<head->data<<" ";
    forwardPrint(head->next);
}
void insertEnd( Node** head, int data)
{
   Node* node = new Node();
   Node *last = *head;
  node->data  = data;     //  Insert data in new node
  node->next = NULL;   // link new node to NULL as it is last node
  if (*head == NULL)  // if list is empty add in beginning.
  {
    *head = node;
    return;
  }
  while (last->next != NULL)  // Find the last node
    last = last->next;
  last->next = node;  // Add the node after the last node of list
  return;
}
Node* oddEvenList(struct Node* head) {
       vector<int>ans;
       while(head!=NULL){
           ans.push_back(head->data);
           head=head->next;
       }
       Node *node=NULL;
       for(int i=0;i<ans.size();i++){
           if(i%2==0){
           insertEnd(&node,ans[i]);}
       }
       for(int i=0;i<ans.size();i++){
           if(i%2!=0){
           insertEnd(&node,ans[i]);}
       }
       return node;
  
}
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
         Node* head = NULL;
         Node* newHead;
        cin>>n;
        while(n--){
          cin>>m;
          insertEnd(&head, m);
        }
        newHead = oddEvenList(head);
        forwardPrint(newHead);
        cout<<endl;
    }
    return 0;
}
