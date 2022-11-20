#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    for (int i=0; i < d.size() ; i++){
        if (budget > 0){
            if (d[i] > budget) break;
            budget -=d[i];
            answer++;
        }
        else break;
    }
    return answer;
}