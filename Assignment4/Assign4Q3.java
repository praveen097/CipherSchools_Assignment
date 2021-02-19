import java.util.*;

public class Assign4Q3 { 

	static Queue<Integer> q; 

	static void Print() 
	{ 
		while (!q.isEmpty()) 
		{ 
			System.out.print(q.peek() + " "); 
			q.remove(); 
		} 
	} 

    static Queue<Integer> reverseQueue(Queue<Integer> q) 
    {  
        if (q.isEmpty()) 
            return q; 
        int data = q.peek(); 
        q.remove(); 
        q = reverseQueue(q); 
        q.add(data);     
        return q; 
    } 


    public static void main(String args[]) 
    { 
        q = new LinkedList<Integer>();
        Scanner s=new Scanner(System.in);
        System.out.println("Enter number of elements you want to add to Queue :");
        int n=s.nextInt();
        for(int i=0;i<n;i++){
            int a=s.nextInt();
            q.add(a);
        }
        q = reverseQueue(q); 
        Print(); 
    } 
} 
