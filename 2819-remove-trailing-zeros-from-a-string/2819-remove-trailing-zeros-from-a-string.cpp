class Solution {
public:
    void reverse(string &str){
        int start = 0;
        int end = str.length() - 1;
        while(start <= end){
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }
    string removeTrailingZeros(string num) {
        int index = -1;
        for(int i = num.length() - 1; i >= 0; i--){
            if(num[i] != '0'){
                index = i;
                break;
            }
        }

        string str = "";
        for(int i = index; i >= 0; i--){
            str.push_back(num[i]);
        }

        reverse(str);
        return str;
    }
};