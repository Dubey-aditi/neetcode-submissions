class Solution {
public:
    int hammingWeight(int n){
        int ans=0;
        while(n>0){
            int remainder = n&1;
            n=n>>1;
            if(remainder==1){
                ans+=1;
            }
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int>ans(n+1, 0);
        int k=n;
        while(n>0){
            int temp = hammingWeight(n);
            ans[k]=temp;
            // cout<<k<<" "<<n<<" "<<temp<<endl;
            k--;
            n--;
        }
        return ans;
    }
};
