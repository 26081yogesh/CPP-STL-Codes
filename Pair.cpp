#include<iostream>
using namespace std;
int main(){
    // pair<int, int> p = {1, 2};
    // cout<<"First :- "<<p.first<<endl;
    // cout<<"Second :- "<<p.second<<endl;

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout<<"First :- "<<p1.first<<endl;
    cout<<"Second -> First :- "<<p1.second.first<<endl;
    cout<<"Second -> Second :- "<<p1.second.second<<endl;
    return 0;
}