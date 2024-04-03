#include "vector"
#include "map"
#include "string"
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string>mymap;
        mymap['2'] = "abc";
        mymap['3'] = "def";
        mymap['4'] = "ghi";
        mymap['5'] = "jkl";
        mymap['6'] = "mno";
        mymap['7'] = "pqrs";
        mymap['8'] = "tuv";
        mymap['9'] = "wxyz";

        vector<string> ret();

    }
};