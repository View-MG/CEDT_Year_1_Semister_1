#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    std::string input = "Hello world this is a test";
    const int maxWords = 10;
    std::string result[maxWords];

    int index = 0;
    size_t pos = 0;
    size_t found;

    while ((found = input.find(' ', pos)) != std::string::npos && index < maxWords) {
        result[index++] = input.substr(pos, found - pos);
        pos = found + 1;
    }

    if (index < maxWords) {
        result[index++] = input.substr(pos);
    }
}