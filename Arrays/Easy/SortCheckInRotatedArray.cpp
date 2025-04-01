class Solution {
    public:
        bool check(vector<int>& nums) {
            vector<int> v1;
            for(auto v:nums){
                v1.push_back(v);
            }
            stable_sort(v1.begin(), v1.end());
            if(v1==nums){
                return true;
            }
            for(int i=0;i<nums.size();i++){
                int temp=nums[0];
                int j;
                for(j=1;j<nums.size();j++){
                    nums[j-1]=nums[j];
                }
                nums[j-1]=temp;
                if(nums==v1){
                    return true;
                }
            }
            return false;
        }
    };