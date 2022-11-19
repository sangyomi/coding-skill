#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool st (int a, int b)
{
    return a>b;
}
long long solution(long long n) {
    string B = to_string(n);
    sort(&B[0],&B[0]+B.size(),st);
    return stoll(B);
}