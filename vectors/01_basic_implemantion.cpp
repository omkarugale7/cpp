#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);    // 	It adds a new element at the end.
    v.push_back(2);
    v.push_back(3);                    // we pushed 1 , 2,3 in vector
                                       // we can traverse through vector same as do for an array
    for (int i = 0; i < v.size(); i++) // v.size() gives the count of elements in vector
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // we can traverse through vector using an iterator , iterator will be a pointer pointing to elements of vectors
    vector<int>::iterator it; // it is the name specified to the iterator
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // in 3rd way we'll use auto
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    v.pop_back(); // end element gets deleted or we can It removes a last element from the vector.
    // so now vector has 1 , 2 as elements and not 1 2 3

    vector<int> v2(3, 7); // we created another vector named v2 here we declared the size too 2 parameter in bracket
    // are (size,element)   so our vector v2 = 7 , 7, 7

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    // we can also swap all values of two vectors
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;
    // to sort array in increasing or decreasing order we have sort function just like we had in arrays
    vector<int> v3;
    v3.push_back(7);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(9);
    v3.push_back(3);
    // output now will be 7 1 0 9 3
    for (auto element : v3)
    {
        cout << element << " ";
    }
    cout << endl;
    sort(v3.begin(), v3.end());
    // output now will be 0 1 3 7 9
    for (auto element : v3)
    {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}