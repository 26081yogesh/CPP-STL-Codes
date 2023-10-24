#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    list<int>::iterator i;
    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    l.push_front(100);
    // l.reverse();
    l.sort();
    // l.pop_back();
    for(i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}