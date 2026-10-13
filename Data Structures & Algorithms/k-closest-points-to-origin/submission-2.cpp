class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<double, vector<int>>>pq;

        for(int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            double dist = pow((x*x + y*y), 0.5);
            pq.push({dist, {x, y}});
            if(pq.size()>k){
                pq.pop();
            }
        }

        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
