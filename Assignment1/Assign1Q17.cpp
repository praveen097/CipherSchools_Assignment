#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void merge(int arr1[], int arr2[], int arr3[], int m, int n)
{
    int i,j;
    for(i = 0; i < m; i++)
        {
            arr3[i] = arr1[i];
        }
    for(i = m, j = 0 ; i < m + n; i++, j++)
        {
            arr3[i] = arr2[j];
        }
}
int main()
{
    int n,m;
    cout << "\nEnter the size of Array 1 : ";
    cin >> m;
    cout << "\nEnter the size of Array 2 : ";
    cin >> n;
    int arr1[m],arr2[n];
    int arr3[m+n];
    int i;
    cout << "\nEnter element of array1 : ";
    for(i = 0; i<m;i++){
        cin >> arr1[i];
    }
    cout << "\nEnter element of array2 : ";
    for(i = 0;i<n;i++){
        cin >> arr2[i];
    }
    merge(arr1,arr2,arr3,m,n);
    cout << "\nThe Merged Array is : ";
    sort(arr3, arr3 +(m+n));
    for(i = 0; i < n + m; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}
