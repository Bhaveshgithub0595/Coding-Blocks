//Remove the Nth node from the linked list
//
//Sample Input 
//1
//5 
//1 2 3 4 5
//3
//
//Sample Output
//1 2 4 5

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
  node->data  = data;     
  node->next = NULL;   
  if (*head == NULL)  
  {
    *head = node;
    return;
  }
  while (last->next != NULL)  
    last = last->next;
  last->next = node;  
  return;
}
Node* removeNthFromEnd(struct Node* A,int B) {
        Node *slow=A,*fast=A,*prev=A;
    int flag=0;
    for(int i=0;i<B;i++){
        fast=fast->next;
        if(fast==NULL){
            flag=1;
            break;
        }
    }
    if(flag) return A->next;
    
    while(fast){
        if(slow!=A) prev=prev->next;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=slow->next;
    return A;
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
        int B;
        cin>>B;
        newHead = removeNthFromEnd(head,B);
        forwardPrint(newHead);
        cout<<endl;
    }
    return 0;
}



