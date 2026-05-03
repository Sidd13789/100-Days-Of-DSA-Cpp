class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";

        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                continue;
            }
            int j=i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            if(ans.length()>0){
                ans+=" ";
            }
            ans+=s.substr(i+1,j-i);
        }
        return ans;
    }
};