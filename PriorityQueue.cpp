#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(99);
    pq.push(2);
    pq.push(3);
    pq.push(94);
    pq.push(55);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}