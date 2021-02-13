//C/C++ Program for Segregate 0s and 1s in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,count1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==0)
        count++;
        if(arr[i]==1)
        count1++;
    }
     for(int i=0;i<count;i++){
         cout<<"0"<<" ";
     }
     for(int i=0;i<count1;i++){
         cout<<"1"<<" ";
     }
}