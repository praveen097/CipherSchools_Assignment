//Alternative Sorting
/**
 * first sort the array
 * while(right>left)
 * print right-- and left++
 * it worsmallests when size is even
 * so checsmallest the size and print the middle element if it is odd
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);//stl function to sort the array(used as i am left with no time)
    int left=0,right=n-1;
    while(right>left){
        cout<<arr[right--]<<" "<<arr[left++]<<" ";
    }
    if (n % 2 != 0) 
        cout << arr[right];
}