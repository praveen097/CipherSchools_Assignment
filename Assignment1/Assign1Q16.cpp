//Find the missing number 
/**
 * sort the given array
 * runt the loop till n-1 as we don't want to know the number after the highet digit
 * given in the array
 * now if (index+1)-1 is not equal to index
 * then print that number+1
 */
#include<bits/stdc++.h>
using namespace std;
void miss(int arr[],int n){//1 2 4 5 6 n=5
    sort(arr,arr+n);
    int digit;
    cout<<"Missing digit is :";
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-1!=arr[i]){//4-1=3
            digit=arr[i]+1;
            cout<<digit<<" ";
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    miss(arr,n);
} 