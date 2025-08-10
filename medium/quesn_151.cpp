#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
// This solution wont work for the edge cases as we are not handling the leading spaces and spaces in between !!!!!!!!!
    // string news = "";
    // int i =0; int j=1;
    // while(j!=s.size()){
    //     if(s[j] == ' '){
    //         news.insert(0, s.substr(i,j-i));
    //         news.insert(0," ");
    //         i = j+1;
    //         j = i;
    //         }
    //      else if(j == s.size()-1){
    //          news.insert(0,s.substr(i,(j+1)-i));
    //      }  
    //         j++;
    // }
    // return news;
    stringstream ss(s);
    string word;
    vector<string> words;
    while(ss>>word){
        words.push_back(word);
    }
    string res;
    for(int i = words.size()-1;i>=0;i--){
        res += words[i];
        if(i!=0){
            res += ' ';
        }
    }
    return res;
    }
};

int main() {
    Solution sol;
    string s = "  hello world  ";
    string reversed = sol.reverseWords(s);
    
    cout << "Reversed words: '" << reversed << "'" << endl;

    return 0;
}