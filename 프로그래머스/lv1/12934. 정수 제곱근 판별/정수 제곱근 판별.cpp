#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int K = int(sqrt(n));
    if(K-sqrt(n) == 0){
        answer = pow(sqrt(n)+1,2);
    }
    else{
        answer = -1;
    }
    return answer;
}