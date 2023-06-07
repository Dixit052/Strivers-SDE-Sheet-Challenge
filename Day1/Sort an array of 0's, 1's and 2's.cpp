void sortColors(vector<int>& nums) {
        int Z  = 0 ,O = 0 ,T =0 ;
        int n = nums.size() ;
        for(auto it : nums){
            if(it==0) Z++;
            else if(it==1) O++;
            else T++ ;
        }
        int i = 0 ;
        while(Z--){
            nums[i] = 0 ;
            i++ ;
        }
        while(O--){
            nums[i]= 1 ;
            i++ ;
        }
        while(T--){
            nums[i] = 2;
            i++ ;
        }
    }