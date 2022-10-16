//Sample Input
//The first line will contains an integer i.e. number of test cases
//Each test case contains two line. First line denotes the number of nodes in list and second line
//contains the node values.
//
//Sample Output
//Print the update Linked List.
//
//Sample Input
//1
//5
//1 2 3 4 5
//
//Sample Output
//1 3 5 2 4


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
         if(head==NULL || head->next==NULL)
            return head;
        Node *odd=head;
        Node *even=head->next,
        *temp1=odd,
        *temp2=even;
        Node *o=head,*e=head->next;
        while(temp1->next!=NULL){
            temp2=temp1->next;
            if(temp1==odd && even->next!=NULL){
                odd->next=even->next;
                odd=odd->next;
            }
            else if(temp1==even && odd->next!=NULL){
                    even->next=odd->next;
                    even=even->next;
            }
            temp1=temp2;
        }
        even->next=NULL;
        odd->next=e;
        return head;
  
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

