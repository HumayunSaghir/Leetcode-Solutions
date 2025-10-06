class Solution {
public:
    void solve(vector<char> &s){
        int start = 0;
        int end = s.size() - 1;
        while(start <= end){
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
    void reverseString(vector<char>& s) {
        solve(s);
        return;
    }
};