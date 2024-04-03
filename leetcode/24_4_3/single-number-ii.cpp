#include "vector"
#include "map"
#include "iostream"
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mymap;
        int end = nums.size();
        for (int i = 0; i < end; ++i) {
            mymap[nums[i]] = (mymap[nums[i]] == 0)?1:mymap[nums[i]]+1;
        }
        for(auto i :mymap){
            if(i.second==1)
                return i.first;
        }
    }
};