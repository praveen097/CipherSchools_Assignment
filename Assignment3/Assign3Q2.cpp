// Recursive program to check if a given linked list is palindrome 
#include <bits/stdc++.h> 
using namespace std; 
struct node { 
	char data; 
	struct node* next; 
}; 
bool isPalindromeUtil(struct node** left, struct node* right) 
{ 
	if (right == NULL) 
		return true; 
	bool p = isPalindromeUtil(left, right->next); 
	if (p == false) 
		return false; 
	bool p1 = (right->data == (*left)->data); 
	*left = (*left)->next; 
	return p1; 
} 
bool isPalindrome(struct node* head) 
{ 
	return isPalindromeUtil(&head, head); 
} 
void insert(struct node** head_ref, char new_data) 
{ 
	struct node* temp = new node(); 
	temp->data = new_data; 
	temp->next = (*head_ref); 
	(*head_ref) = temp; 
} 
void display(struct node* head) 
{ 
	while (head != NULL) { 
		cout << head->data << "->"; 
		head = head->next; 
	} 
	cout << "NULL\n" ; 
} 
int main() 
{ 
	struct node* head = NULL; 
	string str;
	cout<<"Please enter the string :";
	cin>>str;
	int i; 
	for (i = 0; str[i] != '\0'; i++) { 
		insert(&head, str[i]); 
		display(head); 
		isPalindrome(head) ? cout << "Is Palindrome\n\n" : cout << "Not Palindrome\n\n"; 
	} 
	return 0; 
} 

