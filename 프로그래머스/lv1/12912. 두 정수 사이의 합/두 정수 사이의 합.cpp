#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    if (a > b){
        int x = b;
        b = a;
        a = x;
    }
    long long answer = 0;
    for (int i = 0; i < b-a+1; i++){
        answer += b-i;
    }
    return answer;
}