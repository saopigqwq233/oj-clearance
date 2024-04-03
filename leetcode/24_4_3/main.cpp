#include <iostream>
#include "vector"
#include "map"
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {//hash
        map<int,int>mymap;
        for(auto it = nums.begin();it!=nums.end();it++)
            if(mymap.find(*it)==mymap.end())
                mymap.emplace(*it,1);
            else
                mymap[*it]++;
        for(auto item : mymap)
            if(item.second == 1)
                return item.first;
        return -1;
    }
};
int sl(vector<int>&nums){//^
    int ans = nums[0];
    if (nums.size() > 1)
        for (int i = 1; i < nums.size(); i++)
            ans = ans ^ nums[i];
    return ans;
}
int main() {
    vector<int>arr = {19,22,22,3,5,7,3,5,7,19,31};
    Solution s;
    cout<<s.singleNumber(arr)<<endl;
    cout<<sl(arr)<<endl;
    return 0;
}
