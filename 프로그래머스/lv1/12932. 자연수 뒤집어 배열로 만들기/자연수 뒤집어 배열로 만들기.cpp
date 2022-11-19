#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    string s = to_string(n);
    vector<int> answer;
    for (int i = 0 ; i < s.size() ; i ++){
        answer.push_back(s[s.size()-i-1]-48);
    }
    return answer;
}