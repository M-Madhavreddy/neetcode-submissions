class Solution {
public:
    int options(int stepsleft){
            if(stepsleft==0)  return 1;
            if(stepsleft<0) return 0;
        return options(stepsleft-1)+options(stepsleft-2);
    }
    int climbStairs(int n) {
        return options(n);
    }
};
