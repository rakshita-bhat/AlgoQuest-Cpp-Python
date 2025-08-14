class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(i==0 || start>ans.back()[1]){
                for(int j=i+1;j<n;j++){
                    if(intervals[j][0]<=end){
                        if(end<intervals[j][1]){
                            end=intervals[j][1];
                        }
                    }
                    else{
                        break;
                    }
                }
                ans.push_back({start,end});
            }
        }
        return ans;
    }
};