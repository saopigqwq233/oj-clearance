#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
class Solution {
public:
    bool AllisZero(string& str){
        for(auto ch:str)
            if(ch!='0')
                return false;
        return true;
    }
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
        return str;
    }
    string multiply(string num1, string num2) {
        int q = num2.size()-1;
        string ret;
        ret.reserve(300);
        while (q>=0){
            string once;
            int x2 = num2[q]-'0';

            int next = 0;
            int p = num1.size()-1;
            int wei = num2.size()-q-1;
            while (p>=0){
                int x1 = num1[p]-'0';
                int outcome = x1*x2+next;
                next = outcome/10;
                once.push_back(outcome % 10 + '0');
                p--;
            }
            if(next!=0)once.push_back(next+'0');
            if(AllisZero(once)){
                q--;
                ret = addStrings(ret,"0");
                continue;
            }
            reverse(once.begin(), once.end());
            while (wei--)once.push_back('0');
            ret = addStrings(ret,once);
            q--;
        }
        return ret;
    }
};
int main(){
    Solution s;
    string s1("9133");
    string s2("0");
    cout<<s.multiply(s1,s2)<<endl;
    return 0;
}