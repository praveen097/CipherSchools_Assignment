//Write a program to print all permutations of a given string
#include<bits/stdc++.h>
using namespace std;
void swap(int n,int m){
    int temp=n;
    n=m;
    m=temp;
}
void fun(string s,int left,int right){
    if(left==right){//CAT
    cout<<s<<" ";//CAT CTA....
    }
    else{
        for(int i=left;i<=right;i++){
            swap(s[left],s[i]);
            fun(s,left+1,right);
            swap(s[left],s[i]);
        }

    }

}
int main(){
    string s;
    cin>>s;
    int right=s.length(),left=0;
    fun(s,left,right-1);
}