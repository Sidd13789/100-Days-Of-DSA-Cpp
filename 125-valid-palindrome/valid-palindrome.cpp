class Solution {
public:
    bool isPalindrome(string s) {
        int n =s.length();
        int st=0;
        int end=n-1;
        while(st<=end){
            while(st<end && !isalnum(s[st])){
                st++;
            }
            while(st<end && !isalnum(s[end])){
                end--;
            }
            if(tolower(s[st])!=tolower(s[end])){
                cout<<"Not a palindome";
                return false;
            }
            st++;
            end--;
        }
        cout<<"palindome";
        return true;
    }
};