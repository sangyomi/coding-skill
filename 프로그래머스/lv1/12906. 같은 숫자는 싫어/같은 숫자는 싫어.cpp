#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> anr;
    anr.push_back(arr[0]);
    for (int i = 0; i < arr.size() -1 ; ++i){
        if (arr[i]==arr[i+1]){
            continue;
        }
        else anr.push_back(arr[i+1]);
    }
    return anr;
}