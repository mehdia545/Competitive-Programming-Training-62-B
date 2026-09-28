#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(15);
    v.push_back(22);
   for(int i = 0; i < v.size();i++) {
        cout << v[i] << " ";
    } 
    cout << "\n";
    cout << v.front() << "\n"; 
cout << v.back() << "\n";  
    return 0;
}