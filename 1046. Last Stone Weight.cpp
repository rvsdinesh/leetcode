class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int>q(stones.begin(), stones.end());
        int x = 0, y=0;
      
        
        while(q.size() > 1){
            y = q.top();
            q.pop();
            x = q.top();
            q.pop();
            if(y != x){
                q.push(y-x);
            }

        }
        return q.empty() ?  0: q.top();
    }
};