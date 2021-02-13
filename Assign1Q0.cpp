//Question1: Two People meet each other
//If both distance and velocity of X person are more than Y, Then it would be false.
/*
if(distance1>distance2 && velocity1>velocity2)
then false
applies same vice versa
*/
#include<bits/stdc++.h>
using namespace std;
int checkTheMeet(int dis1,int dis2,int vel1,int vel2){
    if(dis1>dis2 && vel1>vel2){
        return false;
    }
    if(dis2>dis1 && vel2>vel1){
        return false;
    }
    while(dis1>=dis2){
        if(dis1==dis2){
            return true;
        }
        dis1=dis1+vel1;
        dis2=dis2+vel2;
    }
    return false;
}
int main(){
    int dis1,dis2,vel1,vel2;
    cin>>dis1>>dis2>>vel1>>vel2;
    if(checkTheMeet(dis1,dis2,vel1,vel2)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}