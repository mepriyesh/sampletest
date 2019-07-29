#include<iostream>
#include <bits/stdc++.h>
#include<windows.h>
#define INT_MAX 1000
/* we have stored the colour according to their code starting from 0 to n-1. Every ball will have value from 0 to n-1 which represents its colour.as we encounter
ball we check its value and update the index in colour array by incrementing it with 1. A few things are missing like number of also i dont know whether we already
have the data structure in which all the balls are already stored */
using namespace std;
void timer(int sec)
{
    Sleep(sec*1000);
}
void insertballs(balls[],colour[],visited[]){
    timer(3);
    int random = rand() % INT_MAX;
    if(visited[random]!=0){
        int current = balls[random];
        colour[current]++;
        visited[random] = 1
  }else if(visited[random] == 1){
      insertballs(balls,colour,visited);
  }

}
void print(colour[]){
    for(int i=0;i<n;i++){
        cout<<"for colour code = i number of balls are"<<colour[i]<<endl;
    }
}

int main(){
    int balls[INT_MAX];
    int colour[n] = {0};
    int *visited = new int[INT_MAX];
    for(int i=0;i<INT_MAX;i++){
        /*we need to colour the balls with their specific colour code(from 0 to n-1) */
        cin>>balls[i];
    }
    insertballs(balls,colour,visited);
    print(colour[]);
    return 0;
}