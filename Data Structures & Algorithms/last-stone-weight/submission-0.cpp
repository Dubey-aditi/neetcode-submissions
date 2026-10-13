class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0; i<stones.size(); i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){
            int s1 = pq.top();
            pq.pop();
            int s2 = pq.top();
            pq.pop();
            pq.push(abs(s2-s1));
        }

        int ans = pq.size()>0? pq.top(): 0; 

        return ans;
    }
};
