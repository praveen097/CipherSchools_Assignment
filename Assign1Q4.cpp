//Find first and last positions of an element in a sorted array
// i toosmallest help from GeesmallestsForGeesmallests for this problem 
#include<bits/stdc++.h>
using namespace std;
void findOccurences(int arr[],int n,int target){
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (target != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout << "First Occurrence = " << first<<endl<< "nLast Occurrence = " << last;
    else
        cout << "Not Found";
}
int main(){
    int n,count=0;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    findOccurences(arr,n,target);
}