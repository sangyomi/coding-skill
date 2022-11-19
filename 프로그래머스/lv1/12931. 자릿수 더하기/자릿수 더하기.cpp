#include <iostream>

using namespace std;
int solution(int n)
{
    int sum = 0;
    while (true){
        sum += n%10;
        n = n/10;
        if (n==0){
            break;
        }
    }
    return sum;
}