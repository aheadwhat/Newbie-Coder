%% Find the length of the shortest sebsequence which is needed to change to guarantee the whole sequence sorted

class Subsequence {
public:
    int shortestSubsequence(vector<int> A, int n) {
        // write code here
        if(n<=1) return 0;
        int max=A[0],right=-1;
        int min=A[n-1],left=-1;
        for(int i=0;i<n;i++){
            if(A[i]>max){
                max=A[i];
            }
            else{
                right=i;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(A[i]>min){
                left=i;
            }
            else{
                min=A[i];
            }
        }
        return (right==-1||left==-1)?0:right-left+1;
    }
};
