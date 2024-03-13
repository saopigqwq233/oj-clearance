#include "string"

using namespace std;

class Solution {
public:
    bool isLetter(char c){
        return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
    }
    string reverseOnlyLetters(string s) {
        int p=0,q=s.size()-1;
        while (p<q){
            while (p<q&& !isLetter(s[p]))p++;
            while (p<q&& !isLetter(s[q]))q--;
            swap(s[p],s[q]);
            p++,q--;
        }
        return s;
    }
};