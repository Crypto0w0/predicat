#include <iostream>
#include <vector>
using namespace std;

bool f(string a, string b){
    if (a.size() < b.size()) return true;
    else return false;
}

int main() {
    string arr[] = {"a", "aaaaaa", "aaa", "aaaaaaaa"};
    vector<string> v(arr, arr + 8);
    sort(v.begin(), v.end(), f);
    for (string el : v){
        cout << el << endl;
    }
}
