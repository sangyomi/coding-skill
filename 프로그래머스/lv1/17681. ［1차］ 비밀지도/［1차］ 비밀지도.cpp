#include <string>
#include <vector>
#include <iostream>
using namespace std;

string T(int N,int n){
    string a="";
    for (int i = 0 ; i < n; i++){
        if (N%2 == 0){
            a.insert(0,"0");
        }
        else a.insert(0,"1");
        N = N/2;
    }    
    return a;
}

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n,"");
    vector<string> x;
    vector<string> y;
    for (int i = 0 ; i< n; i++){
        cout << T(arr1[i],n)<< endl;
    
        x.push_back(T(arr1[i],n));
    }
    for (int i = 0 ; i< n; i++){
        y.push_back(T(arr2[i],n));
    }
    for (int i = 0 ; i< n; i++){
        for (int j = 0; j<n ;j++){
            if (x[i][j]=='0' && y[i][j]=='0'){
                answer[i] += ' ';
            }
            else answer[i] += '#';
        }
    }
    return answer;
}