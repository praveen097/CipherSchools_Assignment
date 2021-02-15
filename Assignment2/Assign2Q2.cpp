//generate parenthesis
#include<bits/stdc++.h>
using namespace std;
void fun(int left,int right,string s){
    if(left > right) {
            return;
        }
        if (left == 0 && right == 0) {
            cout<<s<<endl;
            return;
        }
        if (left > 0) {
            fun(left - 1, right, s + "(");
        }
        if (right > 0) {
            fun(left, right - 1, s + ")");
        }
}
int main(){
    int n;
    cout<<"Enter number to generate the parenthesis :";
    cin>>n;
    fun(n,n, " ");
}