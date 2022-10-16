//rotate the list to the right by k places.
//
//Input Format
//The first line will contains an integer i.e. number of test cases
//Each test case contains three line. First line denotes the number of nodes in list and second line contains the node values.Third line denotes the k .
//
//Output Format
//Print the Linked List After Reversal .
//
//Sample Input
//1
//5
//1 2 3 4 5
//2
//
//Sample Output
//4 5 1 2 3


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
Node* rotateRight(Node* head, int k) {
        
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        Node* res= head;
        int len=1;
        
        while(res->next){
            len++;
            res=res->next;
        }
        
        k=k%len;
        k=len-k;
        if(k==len){
            return head;
        }
        
        
        res->next=head;
        
        res = head;
        
        Node* prev= res;
        while(k){
            k--;
            prev=res;
            res=res->next;
        }
        
        prev->next=NULL;
        
        return res;

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
        int k;
        cin>>k;
        newHead = rotateRight(head,k);
        forwardPrint(newHead);
        cout<<endl;
    }
    return 0;
}

