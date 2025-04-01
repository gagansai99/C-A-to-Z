class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int c=0,maxC=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                    c++;
                    maxC=max(maxC,c);
                }
                else{
                    c=0;
                }
            }
            return maxC;
        }
    };