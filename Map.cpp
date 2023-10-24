#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main(){
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 10));
    mp.insert(pair<int, int>(2, 20));
    mp.insert(pair<int, int>(3, 30));
    mp[4] = 40;

    map<int, int>::iterator i;
    for(i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<endl;
    return 0;
}