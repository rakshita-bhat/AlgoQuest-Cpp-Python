class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int cxor=0;
            for(int j=i;j<n;j++){
                cxor ^=nums[j];

                if(cxor==k) cnt++;
            }
        }
        return cnt;
    }
};