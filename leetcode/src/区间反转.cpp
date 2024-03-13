#include "string"
#include "algorithm"
#include "iostream"
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int index = 0;//遍历字符串
        int left = s.size() - index;
        auto it = s.begin();
        while (left>=2*k){
            reverse(it,it+k);
            it+=(2*k);
            left -=(2*k);
        }
        if(left<k){
            reverse(it,s.end());
        }
        else{
            reverse(it,it+k);
        }
        return s;
    }
};

//int main(){
//    Solution as;
//    string s("abcdefg");
//    cout<<as.reverseStr(s,2)<<endl;
//}