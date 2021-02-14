//Stock Buy Sell to Maximize Profit
/**
 * compare first element will all the elements
 * find the minimum element
 * subtract minimum element with all the elements 
 * now find maximum value
 * print maximum value
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
    int cost = 0;
    int maxi = 0;
    if (n == 0) 
    {
        cout<<"No stocks Found!";
    }
    int miniPrice = arr[0];
    for(int i = 0; i < n; i++)
    {
        miniPrice = min(miniPrice, arr[i]);
        cost = arr[i] - miniPrice;
        maxi = max(maxi, cost);
    }
    cout<<maxi;
} 