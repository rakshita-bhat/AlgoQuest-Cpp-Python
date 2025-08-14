class Solution {
public:
    bool isPalindrome(int x) {
        long num=x;
        long rev=0;
        while(num>0){
            long digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        if(x<0) return false;
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};