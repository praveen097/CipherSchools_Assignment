//Implement Searching/Sorting Algorithms - Binary Search, QuickSort, Merge Sort.
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int left, int right, int key) 
{ 
    while (left <= right) { 
        int m = left + (right - left) / 2; 
        if (arr[m] == key) 
            return m; 
        if (arr[m] < key) 
            left = m + 1; 
        else
            right = m - 1; 
    } 
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search :";
    int key;
    cin>>key;
    cout<<binarySearch(arr,0,n-1,key);
    
}