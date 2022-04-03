class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int e = -1;
        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i+1] > nums[i]){
                e = i;
                break;
            }
        }
        if(e == -1){
            sort(nums.begin(), nums.end());
            return;
        }
        else{
          
            for(int i = nums.size()-1; i >= e+1; i--){
                if(nums[i] > nums[e]){
                   swap(nums[i], nums[e]);
                    break;
                }
            }
            sort(nums.begin()+e+1, nums.end());
            
            return ;
            
        }

        return;
        
    }
};