#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k=0;
        for(int num : nums)
        {
            if(num!=val)
            {
                nums[k++]=num;
            } 
        }
        return k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3,2,2,3,7};
    int val = 2;
    int result = s.removeElement(nums, val);
    cout << result << endl;
    return 0;
}