#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string N = to_string(x);
    int sum = 0;
    for (int i = 0; i < N.size(); i++){
        sum += int(N[i])-48;
    }
    return x%sum == 0;
}