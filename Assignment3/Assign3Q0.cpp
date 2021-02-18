#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void insertAtBeginning(node** root,int data){//pointer to pointer
    node *temp=new node();//new temp node is created
    temp->data=data;//setting this temp data to the data
    temp->next=*root;//Pointing the next pointer to NULL(here * root is NULL)
    *root=temp;//moving the root to new node i.e temp
}
void create(node** root, int new_data)  
{  
    node* temp = new node(); //Creating new node
    node *previous = *root; 
    temp->data = new_data;  
    temp->next = NULL;  
    if (*root == NULL) //base case 
    {  
        *root = temp;  
        return;  
    }  
    while (previous->next != NULL)  
        previous = previous->next;  
    previous->next = temp;  
}
void deletenode(node** root, int key)
{
    node* temp = *root;
    node* prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *root = temp->next; 
        delete temp;            
        return;
    }
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    delete temp;
    }
}
void printList(node *node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main(){
    node *root=NULL;//here  root is pointer type and list is empty now
    int n,a;
    cout<<"Enter how numbers :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        create(&root,a);
    }
    printList(root);
    deletenode(&root,1);
    cout<<endl;
    printList(root);
}