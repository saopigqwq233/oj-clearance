#include <algorithm>
#include "string"

using  namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string str;
        str.reserve(30);
        int p = num1.size()-1,q = num2.size()-1;
        int ret = 0;//和
        int next = 0;//进位
        while (p>=0||q>=0){
            int x1 = (p>=0?num1[p]-'0':0);
            int x2 = (q>=0?num2[q]-'0':0);
            ret = x1+x2+next;
            next = ret/10;
            str.push_back(ret%10+'0');
            p--,q--;
        }
        if(next==1)
            str.push_back('1');

        reverse(str.begin(),str.end());
    }
};