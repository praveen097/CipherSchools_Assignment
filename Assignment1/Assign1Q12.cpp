//Print a given matrix in the spiral form
/**
 * Complexity O(m*n)
 * To print the matrix in spiral form, the approach is
 * left to right(first row)
 * top to bottom(last column)
 * right to left(last row)
 * bottom to top(first column)
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cout << "\nInput the number of rows : ";
cin >> m;
cout << "\nInput the number of columns : ";
cin >> n;
int arr[m][n];
int i,j;
cout << "\nEnter the elements of matrix: \n";
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nThe Matrix is \n";
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    cout << "\nSpiral Matrix : ";
    int k = 0, l = 0;
    while(k < m && l < n){
        for(i = l; i < n; i++){
            cout << arr[k][i] <<" ";
        }
        k++;
    for(i = k; i < m; i++){
        cout << arr[i][n-1] <<" ";
    }
    n--;
    if(k < m){
    for(i = n - 1; i >= 0; --i){
        cout << arr[m-1][i] <<" ";
    }
    m--;
    }
    if(l < n){
    for(i = m - 1; i >= k; i--){
    cout << arr[i][l] <<" ";
    }
    l++;
    }
    }
cout << endl;
return 0;
}

