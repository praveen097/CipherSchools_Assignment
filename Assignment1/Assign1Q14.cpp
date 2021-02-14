//Largest Sum Contiguous Subarray
/**
 *set current max to index 0
 *set highest tp index 0
 * run the loop till n from index
 * find the max of current element and sum of current max and current element
 * now find the max of highest and current max
 * return max
 */

#include<bits/stdc++.h>
using namespace std;
int maxSum(int a[], int n)
{
   int highest = a[0];
   int currentMax = a[0];
 
   for (int i = 1; i < n; i++)
   {
        currentMax = max(a[i], currentMax+a[i]);
        highest = max(highest, currentMax);
   }
   return highest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSum(arr,n);
} 