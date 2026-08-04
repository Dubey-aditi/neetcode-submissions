class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        for(int i=0; i<32; i++){
            int remainder= n&1;
            n = n>>1;
            if(remainder==1){
                ans+=1;
            }
        }
        return ans;
    }
};
