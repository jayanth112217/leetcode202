class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        set<int>st;
       while(n!=1){
       int temp = n;
       long long sum=0;
       while(temp>0){
           int lastdigit = temp%10;
           sum = sum + (lastdigit*lastdigit);
           temp=temp/10;
        } 
        n = sum;
        if(st.find(n)!=st.end()) return false;
        st.insert(n);
        if(n==1) return true;
       }
       return false;
    }
};