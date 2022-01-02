class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = 0,count = 0;
        if(matrix.size() > 2){
            cout<<"HERE"<<matrix.size();
            for( int i = 0 ; i < matrix.size() -1; i++ ) {
               if(target >= matrix[i][0] && target < matrix[i+1][0]){
                  row = i;
                  count = 1;
               }
            }
            for(int i = 0; i<matrix[matrix.size()-1].size();i++){
                if(matrix[matrix.size()-1][i]==target){
                    return true;
                }
            }
            for(int i =0;i<matrix[row].size();i++){
                if(matrix[row][i]==target){
                    return true;
                }
            }
            cout<<row;
            return false;
         } else {
            for(int i =0;i<matrix[0].size();i++){
                if(matrix[0][i]==target){
                    return true;
                }
                cout<<matrix[0][i]<<" ";
            }
            if(matrix.size()==2){
                for(int i =0;i<matrix[1].size();i++){
                if(matrix[1][i]==target){
                    return true;
                }
                cout<<matrix[1][i]<<" ";
            }
            }
            return false;
        } 
    }
};