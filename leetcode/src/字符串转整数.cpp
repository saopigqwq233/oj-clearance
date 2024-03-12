#include "string"
#include "vector"
#include "iostream"
using namespace std;
class Solution {
public:
    int is_F(string& str){
        int ret = 1;
        bool flag = false;
        for(int i = 0;i<str.size();){
            if(str[i]<'0'||str[i]>'9'){
                if(flag) {
                    str.erase(i, str.size() - i);
                    return ret;
                }
                if(str[i]==' '){
                    str.erase(i,1);
                    continue;
                }
                if(str[i]=='-') {
                    ret =-1;
                    str.erase(i, 1);
                    flag = true;
                    continue;
                }
                if(str[i]=='+'){
                    ret = 1;
                    str.erase(i,1);
                    flag = true;
                    continue;
                }
                if(str[i]!=' '&&str[i]!='-')
                    str.erase(i);
                i++;
            }
            else {
                flag = true;
                i++;
            }
        }
        return ret;
    }
    int myAtoi(string str) {
        int max = INT_MAX/10;
        int f = is_F(str);
        int res = 0;
        for (int i = 0; i < str.size(); ++i) {
            if(res>max||(res==max&&str[i]>'7'))
                return f == 1?INT_MAX:INT_MIN;
            res = res*10+(str[i]-'0');
        }
        return f*res;
    }
};

int main(){
    string s("  42 23");
    Solution sl;
    cout<<sl.myAtoi(s);
    return 0;
}

