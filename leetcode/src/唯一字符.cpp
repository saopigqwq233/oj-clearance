#include "string"

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int countChar[26]={0};
        for(auto ch:s){
            countChar[ch-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(countChar[s[i]-'a']==1)
                return i;
        }
        return -1;
    }

};