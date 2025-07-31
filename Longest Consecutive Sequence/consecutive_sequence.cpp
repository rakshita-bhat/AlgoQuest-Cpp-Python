#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>st;
    int mxcnt=1,cnt=0,x;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it :st){
        if(st.find(it-1)==st.end()){
            x=it;
            cnt=1;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt++;
            }
            mxcnt=max(mxcnt,cnt);
        }
    }
    return mxcnt;
}