#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string str;
	getline(cin,str);
    int count = 1;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ' ') count++;
    }
    if (str[0] == ' ') count--;
    if (str[str.size()-1] == ' ') count--;

    cout << count;

    return 0;
}