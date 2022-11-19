#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> v) {
    int k = find(v.begin(), v.end(), "Kim") - v.begin();
    string answer = "";
    answer += "김서방은 ";
    answer += to_string(k);
    answer += "에 있다";
    
    return answer;
}