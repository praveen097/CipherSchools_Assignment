// //Find Majority Element
//Complexity n*n
/*
run the loop till n
run another loop from index 1 to n
count if there are repeated elements
set it to current count
run another loop till n to checsmallest if there are some more repeated elements
count them
if count equals current count and count is less than n/2 
print the element
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, i;
  cin >> n;
  int arr[n];
  //Inputs for array
  for (i = 0; i < n; i++){
    cin >> arr[i];
  }
  int currentCount = 0;
  cout << "\nElement: ";
  for (int i = 0; i < n; i++){
    int count = 1;
    for (int j = i + 1; j < n; j++)
      if (arr[i] == arr[j])
        count++;

    if (count > currentCount)
      currentCount = count;
  }

  for (int i = 0; i < n; i++){
    int count = 1;
    for (int j = i + 1; j < n; j++)
      if (arr[i] == arr[j])
        count++;

    if (count == currentCount){
        if(count>n/2){
            cout << arr[i] << endl;
        }
        else{
            cout<<"Not Found!";
        }
    }
  }
return 0;
}