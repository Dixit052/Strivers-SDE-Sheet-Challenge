vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect  ;
        for(int i = 0 ;i< numRows ;i++){
            vector<int>vect1(i+1,1) ;
            if(i>1){
                for(int j = 0 ;j<i-1 ;j++){
                    vect1[j+1] = vect[i-1][j] + vect[i-1][j+1];
                }
            }
            vect.push_back(vect1);
        }
        return vect ;

    }