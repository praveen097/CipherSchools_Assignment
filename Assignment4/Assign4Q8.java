import java.util.*; 

public class Assign4Q8 { 

	static boolean pBalanced(String str) 
	{ 
		Deque<Character> stack 
			= new ArrayDeque<Character>(); 
		for (int i = 0; i < str.length(); i++) 
		{ 
			char x = str.charAt(i); 
			if (x == '(' || x == '[' || x == '{') 
			{ 
				stack.push(x); 
				continue; 
			}  
			if (stack.isEmpty()) 
				return false; 
			char ch; 
			switch (x) { 
			case ')': 
				ch = stack.pop(); 
				if (ch == '{' || ch == '[') 
					return false; 
				break; 

			case '}': 
				ch = stack.pop(); 
				if (ch == '(' || ch == '[') 
					return false; 
				break; 

			case ']': 
				ch = stack.pop(); 
				if (ch == '(' || ch == '{') 
					return false; 
				break; 
			} 
		} 
		return (stack.isEmpty()); 
	} 

	public static void main(String[] args) 
	{ 
		String str = "([{}])"; 

		if (pBalanced(str)) 
			System.out.println(str+ " is balanced "); 
		else
			System.out.println(str+ " is not balanced "); 
	} 
} 
