//Trapping of rain water
/**
 * Yayyyy!, we discussed this in the class
 * run loop from index 1 to n-1 to traverse every element
 * find the maximum element to its left
 * find the maximul element to its right
 * update the maximum water
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
    int water = 0;
    for (int i = 1; i < n-1; i++) {
         
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);

        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]); 
          
       water = water + (min(left, right) - arr[i]);   
    }
    cout<<water; 
} 