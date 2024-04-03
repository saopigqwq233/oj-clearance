#include "vector"
#include "iostream"

using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ret(numRows);
        for (int i = 0; i < numRows; ++i) {
            ret[i].resize(i+1);
            ret[i][0] = ret[i][i] = 1;
            for(int j = 1;j<i;++j){
                ret[i][j] = ret[i-1][j-1]+ret[i-1][j];
            }
        }
        return ret;
    }
};
int main(){
    int n = 5;
    Solution s;
    auto l = s.generate(n);
    for (int i = 0; i < n; ++i) {
        for (int j : l[i]) {
            cout<<j<<' ';
        }
    }

}