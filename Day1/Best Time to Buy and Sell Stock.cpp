int maxProfit(vector<int>& prices) {
          int n = prices.size() ;
          int profit  = 0 ;
          int minVal = prices[0] ;

          for(int i = 1 ; i<n;i++){
             minVal = min(minVal, prices[i] ); 
             int curr  = prices[i] - minVal ;
             profit = max(profit, curr) ;    
          }
         return profit  ;
    
    }