import java.util.*;

class Assign3Q10 { 

static class Node { 
	int data; 
	Node next; 
} 
static Node head = null; 
static Node Reverse(Node head, int k) { 
	Stack<Node> stk = new Stack<Node> (); 
	Node current = head; 
	Node prev = null; 

	while (current != null) 
	{ 
		int count = 0; 
		while (current != null && count < k) 
		{ 
			stk.push(current); 
			current = current.next; 
			count++; 
		} 
		while (stk.size() > 0) 
		{ 
			if (prev == null) 
			{ 
				prev = stk.peek(); 
				head = prev; 
				stk.pop(); 
			} 
			else
			{ 
				prev.next = stk.peek(); 
				prev = prev.next; 
				stk.pop(); 
			} 
		} 
	} 
	prev.next = null; 
	return head; 
} 
static void push( int new_data) { 
	Node temp = new Node(); 
	temp.data = new_data; 
	temp.next = head; 
	head = temp; 
} 
static void printList(Node node) { 
	while (node != null) 
	{ 
		System.out.print(node.data + " "); 
		node = node.next; 
	} 
} 
public static void main(String[] args) {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter number of elements :");
    int n=s.nextInt();
    for(int i=0;i<n;i++){
        int a=s.nextInt();
        push(a);
    } 
	System.out.println("Given linked list "); 
	printList(head); 
	head = Reverse(head, 3); 
	System.out.println(); 

	System.out.println("Reversed Linked list "); 
	printList(head); 
} 
} 

