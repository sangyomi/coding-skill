#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int sum = 1;
    for (int i = 0; i < s.size(); i++){
        if (s[i]==' '){
            sum = 1;
            continue;
        }
        else if (sum%2 == 1){
            s[i] = toupper(s[i]);
        }
        else s[i] = tolower(s[i]);
        sum++;
    }
    return s;
}