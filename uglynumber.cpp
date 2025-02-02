class Solution {
public:
    bool isUgly(int n) {
        //Edge Cases
        if(n <= 0)
            return false;
        
        //Continuously dividing n by 2, 3 & 5
        while(n % 2 == 0) 
            n/= 2;
        while(n % 3 == 0)
            n/=3;
        while(n % 5 == 0)
            n/=5;
        
        // at end if n becomes 1 then it is ugly number else not
        return n == 1;
    }
};
