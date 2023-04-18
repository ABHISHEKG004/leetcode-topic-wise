// https://leetcode.com/problems/next-permutation/description/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int i,j,k;
        k = nums.size();

        //edge case
        if(k<=1){
            return;
        }

        int fg = 0;
        int breakPointValue=-1, breakPointIndex=-1;

        for(i=k-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                fg = 1;
                breakPointValue = nums[i];
                breakPointIndex = i;
                break;
            }
        }

        //covering decreasing sequence case
        if(fg==0){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(i=k-1;i>=0;i--){
            if(nums[i]>breakPointValue){
                nums[breakPointIndex] = nums[i];
                nums[i] = breakPointValue;
                break;
            }
        }

        reverse(nums.begin()+breakPointIndex + 1, nums.end());

    }
};

