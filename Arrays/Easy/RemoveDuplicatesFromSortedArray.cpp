class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i=0,j=0;
            while(j<nums.size()){
                // if(i==j){
                    
                //     j++;
                // }
                if(nums[i]==nums[j]){
                    j++;
                }
                else{
                    int temp=nums[i+1];
                    nums[i+1]=nums[j];
                    nums[j]=temp;
                    i++;
                    j++;
                }
            }
            return i+1;
        }
    };