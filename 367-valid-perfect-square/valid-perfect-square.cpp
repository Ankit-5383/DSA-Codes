class Solution {
public:
    bool isPerfectSquare(int num) {
        long start = 0;
        long end = num;

        while(start<=end){
            long mid = start+(end-start)/2;
            
            if(mid*mid == num){
                return true;
            }
            else if(mid*mid<num){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        
        return false;
    }
};