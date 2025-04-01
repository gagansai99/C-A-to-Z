class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int xor1=0,xor2=0;
            for(int i=0;i<=nums.size();i++){
                xor1^=i;
            }
            for(int i=0;i<nums.size();i++){
                xor2^=nums[i];
            }
            return xor1^xor2;
        }
    };