#include <bits/stdc++.h> 
using namespace std;
struct MyStack 
{ 
	stack<int> s; 
	int minEle; 
	void minInStack() 
	{ 
		if (s.empty()) 
			cout << "Underflow, stack is emplty\n"; 
		else
			cout <<"Minimum Element is: "<< minEle << "\n"; 
	} 
	void push(int x) 
	{ 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			return; 
		} 
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 
		else
		s.push(x); 
	} 
}; 

int main() 
{ 
	MyStack s; 
    int n;
    cout<<"Enter number of element you want to push :";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
	s.minInStack(); 
	return 0; 
} 
