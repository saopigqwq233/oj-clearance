#include "string"
#include "vector"
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0,j = s.size(); i < j; ++i,j--) {
            swap(s[i],s[j]);
        }
    }
    void swap(char &l,char &r){
        char tmp = l;
        l = r;
        r = tmp;
    }

};

}