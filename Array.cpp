#include<iostream>
#include<array>
#include<tuple> // for using get()
using namespace std;
int main(){
    array<int, 5> arr = {1, 2, 3, 4, 5};
    // arr.fill(5);
    for(int i=0;i<arr.size();i++){
        // cout<<arr[i]<<" ";
        cout<<arr.at(i)<<" ";
    }
    cout<<"\nFirst Element :- "<<arr.front()<<endl;
    cout<<"Last Element :- "<<arr.back()<<endl;
    if(arr.empty()){
        cout<<"Array is empty"<<endl;
    }
    else{
        cout<<"Array is not empty"<<endl;
    }
    // cout<<get<1> (arr)<<endl;
    array<int, 5> arr1 = {6, 7, 8, 9, 10};
    arr.swap(arr1);
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}