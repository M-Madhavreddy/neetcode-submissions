class Solution {
public:
    int options(vector<int>& mem, int stepsleft){
            if(stepsleft==0)  return 1;
            if(stepsleft<0) return 0;
            if(mem[stepsleft-1]!=-1) return mem[stepsleft-1];
            mem[stepsleft-1]=options(mem,stepsleft-1)+options(mem,stepsleft-2);
            return mem[stepsleft-1];
    }
    int climbStairs(int n) {
        vector<int> memory(n,-1);
        return options(memory, n);
    }
};
