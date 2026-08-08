class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n=matrix[0].size();
        cout<<m<<" "<<n<<endl;

        int l=0, r=m-1;

        while(l<=r){
            int mid = (l+r)/2;
            if(matrix[mid][n-1]==target){
                return true;
            }else if(matrix[mid][n-1]>target){
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        cout<<l<<" "<<r;
        int i=l;

        if(i>=m){
            return false;
        }

        l=0, r=n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(matrix[i][mid]>target){
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        return false;
    }
};
