#include "string"
#include "iostream"
using namespace std;

class Solution {
public:
    bool isSame(char a,char b){
        int flag = false;
        if(a==b)
            flag = true;
        if((a>='A'&&a<='Z')||(a>='a'&&a<='z')&&
        (b>='A'&&b<='Z')||(b>='a'&&b<='z')) {
            if (a + 32 == b)
                flag = true;
            if (a - 32 == b)
                flag = true;
        }

        return flag;
    }
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); ) {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||s[i]>='0'&&s[i]<='9')
                i++;
            else
                s.erase(i,1);
        }
        int i=0,j=s.size()-1;
        while (i!=j&&j!=-1){
            if(!isSame(s[i],s[j]))
                return false;
            else{
                i++,j--;
            }
        }
        return true;
    }
};


//int main(){
//    string s1("OP");
//    cout<<s1.size()<<endl;
//    Solution s;
//    cout<<s.isPalindrome(s1)<<endl;
//}