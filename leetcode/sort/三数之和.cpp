#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>anwsers;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            for (int j = 0; j < size; ++j) {
                if(j == i)
                    continue;
                for (int k = 0; k < size; ++k) {
                    if(k == j||k == i)
                        continue;
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        anwsers.push_back(tmp);
                    }
                }
            }
        }
        return anwsers;
    }
};
int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(-10);
    arr.push_back(-7);
    arr.push_back(-5);
    arr.push_back(0);
    arr.push_back(-3);
    arr.push_back(1);
    auto ans=s.threeSum(arr);
    for (auto i:ans)
    {
        cout<<i[0]<<' '<<i[1]<<' '<<i[2]<<endl;
    }
    return 0;
}