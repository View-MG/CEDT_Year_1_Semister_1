#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> text{
    {"2", "a"}, {"22", "b"}, {"222", "c"},
    {"3", "d"}, {"33", "e"}, {"333", "f"},
    {"4", "g"}, {"44", "h"}, {"444", "i"},
    {"5", "j"}, {"55", "k"}, {"555", "l"},
    {"6", "m"}, {"66", "n"}, {"666", "o"},
    {"7", "p"}, {"77", "q"}, {"777", "r"}, {"7777", "s"},
    {"8", "t"}, {"88", "u"}, {"888", "v"},
    {"9", "w"}, {"99", "x"}, {"999", "y"}, {"9999", "z"},
    {"a", "2"}, {"b", "22"}, {"c", "222"},
    {"d", "3"}, {"e", "33"}, {"f", "333"},
    {"g", "4"}, {"h", "44"}, {"i", "444"},
    {"j", "5"}, {"k", "55"}, {"l", "555"},
    {"m", "6"}, {"n", "66"}, {"o", "666"},
    {"p", "7"}, {"q", "77"}, {"r", "777"}, {"s", "7777"},
    {"t", "8"}, {"u", "88"}, {"v", "888"},
    {"w", "9"}, {"x", "99"}, {"y", "999"}, {"z", "9999"},
    {"A", "2"}, {"B", "22"}, {"C", "222"},
    {"D", "3"}, {"E", "33"}, {"F", "333"},
    {"G", "4"}, {"H", "44"}, {"I", "444"},
    {"J", "5"}, {"K", "55"}, {"L", "555"},
    {"M", "6"}, {"N", "66"}, {"O", "666"},
    {"P", "7"}, {"Q", "77"}, {"R", "777"}, {"S", "7777"},
    {"T", "8"}, {"U", "88"}, {"V", "888"},
    {"W", "9"}, {"X", "99"}, {"Y", "999"}, {"Z", "9999"},
    {" ", "0"}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string input;
    getline(cin, input);
    
    string result = "";
    
    for (char c : input) {
        string s(1, c);  // Convert char to string
        if (text.find(s) != text.end()) {
            result += text[s] + " ";
        }
    }
    
    cout << result << endl;
    return 0;
}