class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int i = x;
        int p,a=0;
        while(i!=0){
            p=i%10;
            if (a > INT_MAX / 10 || (a == INT_MAX / 10 && p > 7)) {
                return 0;
            }
            if (a < INT_MIN / 10 || (a == INT_MIN / 10 && p < -8)) {
                return 0;
            }
            a = a * 10 + p;
            i = i/10;
        }
        if(a==x){
            return true;
        }
        else{
            return false;
        }
    }
};