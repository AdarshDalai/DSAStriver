#include<bits/stdc++.h>

using namespace std;

void explainPair();

int main() {
    explainPair();
}

void explainPair() {
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second;
    cout << "\n";
    //nesting of pair
    pair<int, pair<int, int>> p1 = {1, {2,3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second;
    cout << "\n";
    pair<int, int> arr[] = {{1,2}, {3, 4}};
    cout << arr[0].first << " " << arr[1].second << "\n";
}