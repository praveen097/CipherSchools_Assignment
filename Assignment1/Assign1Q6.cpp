//Sort012
#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int left = 0;
    int right = n - 1;
    int mid = 0;
    while(mid <= right) {
        if(arr[mid] == 0) {
            int temp = arr[left];
            arr[left] = arr[mid];
            arr[mid] = temp;
            left++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[right];
            arr[right] = temp;
            right--;
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
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}