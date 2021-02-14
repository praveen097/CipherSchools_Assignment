//Search in sorted matrix
#include<bits/stdc++.h>
using namespace std;
int searchSorted(int arr[4][4],int target){
    int i=0;
    int j=4-1;
    while(i<4 && j>=0){
        if(arr[i][j]==target){
            return true;
        }
        if(arr[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    return false;
}
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        cout<<"Enter elements for row "<<i<<":";
        for(int j=0;j<cols;j++){
            int value;
            cin>>value;
            arr[i][j]=value;
        }
    }
    int target;
    cin>>target;

}