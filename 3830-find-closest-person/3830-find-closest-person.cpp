class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans1 = abs(x - z);
        int ans2 = abs(y - z);
        if(ans1 == ans2){
            return 0;
        }
        else if(ans1 < ans2){
            return 1;
        }
        return 2;
    }
};