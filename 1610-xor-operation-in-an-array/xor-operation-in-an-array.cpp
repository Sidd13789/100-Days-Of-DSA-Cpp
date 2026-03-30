class Solution {
public:
    int xorOperation(int n, int start) {
        int operation=0;
        for(int i=0;i<n;i++){
            operation^=(start+2*i);
        }
        return operation;
    }
};