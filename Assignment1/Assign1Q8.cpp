//kth smallest Elements
/**
 * Yeahhh, we discussed this in the class
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
    int smallest;
    cin>>smallest;
    for(int i = smallest; i < n; i++) {

            int max = arr[smallest -1];
            int max_position = smallest - 1;

            for(int j = smallest - 2; j >= 0 ; j--) {
                if(arr[j] > max) {
                    max = arr[j];
                    max_position = j;
                }
            }

            int currentElement = arr[i];

            if(max > currentElement) {

                int m = max_position;
                while(m < smallest - 1) {
                    arr[m] = arr[m + 1];
                    m++;
                }
                arr[smallest - 1] = currentElement;
            }
        }

        for(int i = 0; i < smallest; i++) {
            cout<<arr[i]<<"  ";
        }
} 