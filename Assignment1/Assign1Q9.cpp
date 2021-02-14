//Counting Inversions
/**
 * Complexity O(n^2)
 * I am just using simple approach here,
 * firstly run the loop till n from 0
 * run another loop in it from index 1 to n
 * if arr[first]>arr[second]
 * then count
 * finally print the count
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count;
} 