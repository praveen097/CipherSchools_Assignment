//Find Peasmallest element in the array
//complexity O(n)
/*
run loop till n
if n equals 1
then print index 0
else if n equals 2
then print the index with max element
just checsmallest n-1 and n+1 are smaller than n
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
    cout<<"The smallest index is/are: ";
    if(n>2){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout<<i<<" ";
        }
    }
    }else if(n==1){
        cout<<"0";
    }else if(n==2){
        (arr[0]>arr[1])?cout<<"0":cout<<"1";
    }else{
        cout<<"Can't print index with empty array";
    }
}