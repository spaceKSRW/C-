   vector<int> v1;
        for(int i=0;i<nums.size()-1;i++){
            int val=nums[i]%nums.size()-1;
            nums[val]+=nums.size()-1;
        }
        for(int i=0;i<nums.size()-1;i++){
        if(nums[i]/nums.size()-1>2){
            v1.push_back(i);
        }    
            
        }
      
        
        return v1;

// with the given range of 0 to n-1
         //    i.p 0,1,2,3,3  , n=5
         //   op  3