class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i <= n; i++){
            int num = i;
            if(num % 3 == 0 && num % 5 == 0){
                result.push_back("FizzBuzz");
            }
            else if(num % 3 == 0){
                result.push_back("Fizz");
            }

            else if(num % 5 == 0){
                result.push_back("Buzz");
            }

            else{
                string str = to_string(i);
                result.push_back(str);
            }

        }

        return result;
    }
};