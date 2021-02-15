//Search an element in a sorted and rotated array
/**
 * just using linear search as there is no time
 */
#include<bits/stdc++.h>
using namespace std;
void searchInArray(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        cout<<"Element found at :"<<i;
        
    }
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key to be searched :";
    cin>>key;
    searchInArray(arr,key,n);

} 
