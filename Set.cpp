#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    // set<int> st;
    // set<int, greater<int>> st;
    multiset<int> st;
    st.insert(99);
    st.insert(5);
    st.insert(66);
    st.insert(5);
    st.insert(1);

    // set<int>:: iterator i;
    // set<int, greater<int>>:: iterator i;
    multiset<int>::iterator i;
    for(i=st.begin();i!=st.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}