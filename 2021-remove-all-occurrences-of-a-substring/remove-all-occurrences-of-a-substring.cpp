class Solution {
public:
    string removeOccurrences(string s, string part) {
        string rem= "";

        for(char c:s){
            rem.push_back(c);
            if(rem.size()>=part.size() && rem.substr(rem.size()-part.size())==part){
                rem.erase(rem.size()-part.size());
            }
        }
        return rem;
    }
};