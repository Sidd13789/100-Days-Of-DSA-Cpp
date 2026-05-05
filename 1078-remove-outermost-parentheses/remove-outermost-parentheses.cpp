class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans= "";
        int value=0;
        for(char ch: s){
            if(ch=='('){
                value++;
                if(value>1){
                    ans+=ch;
                }
            }else{
                value--;
                if(value>0){
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};