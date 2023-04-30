class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=1;
        int steps=nums[0];
        int max_step=nums[0];
        if(nums.size()==0 || nums.size()==1){
            return 0;
        }
        if(steps==0){
            return 0;
        }
        for(int i=1;i<nums.size()-1;i++){
            max_step=max(i+nums[i],max_step);
            steps--;
            if(steps==0){
                jump++;
                steps=max_step-i;
               
                }
             if(i>max_step){
                    return -1;
        }
            }
        
        return jump;
        
    }
};