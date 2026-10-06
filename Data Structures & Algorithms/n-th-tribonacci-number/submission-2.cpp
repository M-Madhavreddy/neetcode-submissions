class Solution {
public:
    int tribonacci(int n) {
        vector<int> t(3,-1);
        t[0]=0;
        if(n>0) t[1]=1;
        if(n>1) t[2]=1;
        for(int i=3;i<=n;i++){
            int ti=t[0]+t[1]+t[2];
            t[0]=t[1];
            t[1]=t[2];
            t[2]=ti;
        }
        if(n>=2) return t[2];
        return t[n];
    }
};