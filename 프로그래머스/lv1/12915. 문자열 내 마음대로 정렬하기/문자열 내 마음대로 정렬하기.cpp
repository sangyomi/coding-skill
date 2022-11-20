#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int T;

bool ad (string a, string b){
    if (a[T] == b[T])
        return a<b;
    return a[T]<b[T];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    T = n;
    cout << T;
    sort(strings.begin(),strings.end(),ad);
    return strings;
}