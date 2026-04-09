class Solution {
public:
    string addBinary(string a, string b) {
        string strr="";
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0 ||j>=0||carry){
            int sum=carry;
            if(i>=0){
                sum+=a[i--]-'0';
            }
            if(j>=0){
                sum+=b[j--]-'0';
            }
            strr=char(sum%2+'0')+strr;
            carry=sum/2;
        }
        return strr;
    }
};