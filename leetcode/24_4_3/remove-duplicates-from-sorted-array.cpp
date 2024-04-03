#include "vector"
#include "map"
#include "iostream"
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {//hash
        map<int,int>mymap;
        for(auto it = nums.begin();it!=nums.end();++it){
            if(mymap.find(*it)==mymap.end())
                mymap.emplace(*it,0);
            else{
                mymap[*it]+=1;
                it = --nums.erase(it);//避免迭代器失效
            }
        }
        return nums.size();
    }
};