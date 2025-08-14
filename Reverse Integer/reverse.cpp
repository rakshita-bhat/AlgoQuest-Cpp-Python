class Solution {
public:
    int reverse(int x) {
        long num=x;
        long rev=0;
        while(num!=0){
            long digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return int(rev);
    }
};