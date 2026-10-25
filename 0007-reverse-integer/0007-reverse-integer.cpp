class Solution {
public:
    int reverse(int x) {
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
        return a;
    }
};