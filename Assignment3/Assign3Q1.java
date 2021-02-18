//Reverse a linked list
import java.util.*;
class Assign3Q1 { 
	static Node head; 
	
	static class Node { 
		int data; 
		Node next; 
		Node(int d) 
		{ 
			data = d; 
			next = null; 
		} 
	} 
	static Node reverseList(Node head) 
	{ 
		if (head == null || head.next == null) 
			return head; 
		Node rest = reverseList(head.next); 
		head.next.next = head; 
		head.next = null; 
		return rest; 
	} 
	static void display() 
	{ 
		Node temp = head; 
		while (temp != null) { 
			System.out.display(temp.data + " "); 
			temp = temp.next; 
		} 
		System.out.displayln();
	} 

	static void insert(int data) 
	{ 
		Node temp = new Node(data); 
		temp.next = head; 
		head = temp; 
	} 

public static void main(String args[]) 
{ 
    Scanner s=new Scanner(System.in);
    System.out.displayln("Enter number of element you want to add :");
	int n=s.nextInt();
    for(int i=0;i<n;i++){
        System.out.displayln("Enter number "+i);
        int a=s.nextInt();
        insert(a);
    }
	head = reverseList(head); 

	System.out.displayln("reverseListd Linked list is"); 
	display(); 
}
}
