//Minimum Number of Platforms Required for a Railway/Bus Station 
/**
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int minimumPlatforms(int arr[],int dep[],int totalTrains){

    int platforms=1,minPlatforms=1;
    for(int i=0;i<totalTrains;i++){
        platforms=1;
        for(int j=i+1;j<totalTrains;j++){
            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i])){
                platforms++;
            }
        }
        minPlatforms = max(minPlatforms,platforms);
    }
    return minPlatforms;
}
int main(){
    int n;
    cout<<"Enter total number of trains/buses :";
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++){
        cout<<"Enter arrival time of Train/Bus(Mins) "<<i+1<<": ";
        cin>>arr[i];
        cout<<"Enter departure time of Train/Bus(Mins) "<<i+1<<": ";
        cin>>dep[i];
    }
    cout<<"Needed platforms are :"<<minimumPlatforms(arr,dep,n);

} 