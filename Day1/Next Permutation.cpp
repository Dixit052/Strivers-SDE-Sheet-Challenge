void nextPermutation(vector<int>& nums) {
         int n = nums.size() ;
         int cntr  ;
         for(int i= n-1 ;i>=1 ;i--){
             if(nums[i-1]<nums[i]){
                 cntr = i-1 ;
                 sort(nums.begin()+i ,nums.end()) ;
                 break ;
             }
         }
         for(int i=cntr ; i<n-1 ; i++){
             if(nums[i+1]>nums[cntr]){
                   swap(nums[cntr] , nums[i+1]);
                   sort(nums.begin()+cntr+1 , nums.end());
                   return ;
              }
         }
         sort(nums.begin() ,nums.end());
         return  ;

    }