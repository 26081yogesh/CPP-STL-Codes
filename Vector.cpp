#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i * 2);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << v.size() << endl;
    // v.shrink_to_fit();
    cout << v.capacity();

    if (v.empty())
    {
        cout << "\nvector is empty" << endl;
    }
    else
    {
        cout << "\nvector is not empty" << endl;
    }

    v.insert(v.begin(), 100);

    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " * ";
    }

    // cout<<endl;
    // vector<int>::reverse_iterator x;
    // for (x = v.rbegin(); x != v.rend(); x++)
    // {
    //     cout << *x << " * ";
    // }

    cout << endl;
    return 0;
}