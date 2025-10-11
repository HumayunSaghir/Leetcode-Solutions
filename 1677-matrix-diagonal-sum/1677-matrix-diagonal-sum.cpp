class Solution {
public:
    int solve(vector<vector<int>> &mat){
        int n = mat.size(); //4
        int sum1 = 0;
        int x = 0;
        int y = 0;

        bool flag = false;
        
        if(n % 2 != 0){ //odd -> true
            flag = true;
        }

        // Primary diagonal Sum!
        for(int i = 1; i <= n; i++){
            sum1 = sum1 + mat[x][y];
            if(flag == true){
                mat[x][y] = -1;
            }

            x = x + 1;
            y = y + 1;
        }

        int sum2 = 0;
        x = 0;
        y = n - 1; //3

        for(int i = 1; i <= n; i++){
            if(mat[x][y] == -1){
                x = x + 1;
                y = y - 1;
                continue;
            }

            sum2 = sum2 + mat[x][y];
            x = x + 1;
            y = y - 1;
        }

        return sum1 + sum2;
    }

    int diagonalSum(vector<vector<int>>& mat) {
        int ans = solve(mat);
        return ans;
        return ans;
    }
};