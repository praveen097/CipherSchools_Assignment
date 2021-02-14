#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[4][4],int target){
    int i=0,j=(4-1);
    while(i<4 && j>=0){
        if(arr[i][j]==target){
            return true;
        }
        if(arr[i][j] > target) {
            j--; 
        } else {
            i++; 
         }
    }
    return false;
}
int main(){
    int rows,cols;
    cout<<"Enter rows and columns :";
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int elementSearch;
    cout<<"Enter element to be searched :";
    cin>>elementSearch;
    cout<<smallest(arr,elementSearch);
}