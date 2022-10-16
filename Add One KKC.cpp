//OUTPUT FORMAT
//Print the integer after adding 1 to the number represent by link list of each test case
//
//SAMPLE INPUT
//1
//3
//1 2 3
//SAMPLE OUTPUT
//124


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
int addOne(Node *head){
    string s="";
    while(head!=NULL){
        s+=to_string(head->data);
        head=head->next;
    }
    int val=stoi(s);
    return val+1;
}
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
         Node* head = NULL;
        cin>>n;
        while(n--){
          cin>>m;
          insertEnd(&head, m);
        }
        cout<<addOne(head);
        cout<<endl;
    }
    return 0;
}

