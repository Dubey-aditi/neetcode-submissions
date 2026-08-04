class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int k=31;
        uint32_t ans =0;
        while(k>=0){
            if(n&1==1){
                ans+=(pow(2, k));
            }
            n=n>>1;
            k--;
        }
        return ans;
    }
};
