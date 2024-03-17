class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), i = 0;
        vector<vector<int>>v;

        while(i < n && intervals[i][1] < newInterval[0]){
            v.push_back(intervals[i++]);
        }
        
        while(i < n && newInterval[1] >= intervals[i][0]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        v.push_back(newInterval);
        while(i<n)v.push_back(intervals[i++]);
        return v;
        
        
    }
};
