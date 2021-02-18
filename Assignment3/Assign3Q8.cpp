
#include <bits/stdc++.h> 
using namespace std; 

struct node 
{ 
	int data; 
	struct node *next; 
}; 

void insertAtBeginning(node** root,int data){//pointer to pointer
    node *temp=new node();//new temp node is created
    temp->data=data;//setting this temp data to the data
    temp->next=*root;//Pointing the next pointer to NULL(here * root is NULL)
    *root=temp;//moving the root to new node i.e temp
}
 
void printList(struct node *node) 
{ 
	while (node != NULL) 
	{ 
		printf("%d ", node -> data); 
		node = node -> next; 
	} 
} 


void duplicates(struct node* &start) 
{ 

	node* dummy = new node; 
	dummy -> next = start; 
	node* prev = dummy; 
	node* current = start; 
	while(current != NULL) 
	{  
		while(current -> next != NULL && 
			prev -> next -> data == current -> next -> data) 
			current = current -> next; 
		if (prev -> next == current) 
			prev = prev -> next; 
		else
			prev -> next = current -> next; 

		current = current -> next; 
	} 
	start = dummy -> next; 
} 

int main() 
{ 
	node* head=NULL;
    int n,a;
    cout<<"Enter number of elements :";
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        insertAtBeginning(&head,a);
    }
	cout << "List before removal " << "of duplicates\n"; 
	printList(head); 
	duplicates(head); 
	cout << "\nList after removal " << "of duplicates\n"; 
	printList(head); 
	return 0; 
} 
