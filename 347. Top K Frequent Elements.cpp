class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        vector<int> res;
        for(auto i: nums){
            m[i]++;
        }
        std::unordered_map<int, int> :: iterator itr;
        std::priority_queue<pair<int, int>> pq;
        for(itr = m.begin(); itr!= m.end(); itr++){
             pq.push(make_pair(itr->second, itr->first));
            if(pq.size() > m.size()-k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        
        
        return res;
    }
};