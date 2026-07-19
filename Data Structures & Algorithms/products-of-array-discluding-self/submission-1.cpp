class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>preProduct;
        vector<int>postProduct;
        vector<int>ans;
        int n= nums.size();
        int curr=1;
        for(int i=0; i<nums.size(); i++){
            preProduct.push_back(curr);
            curr*=nums[i];
        }
        // for(int i=0; i<nums.size(); i++){
        //     cout<<preProduct[i]<<" ";
        // }
        // cout<<endl;
        curr = 1;
        for(int i= nums.size()-1; i >=0; i--){
            postProduct.push_back(curr);
            curr*=nums[i];
        }
        // for(int i=0; i<nums.size(); i++){
        //     cout<<postProduct[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0; i<n; i++){
            // cout<<preProduct[i]<<endl;
            // cout<<postProduct[n-i-1]<<endl;
            ans.push_back(preProduct[i]*postProduct[n-i-1]);
        }
        return ans;
    }
};
