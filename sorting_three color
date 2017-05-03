# Sorting 0,1,2 by groups with swapping operations

class ThreeColor {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    vector<int> sortThreeColor(vector<int> A, int n) {
        // write code here
        int left=0;
        int right=n-1;
        int cur=0;
        while(cur<=right){
            if(A[cur]==1){
                cur++;
            }
            else if(A[cur]==0){
                swap(A[cur++],A[left++]);
            }
            else{
                swap(A[cur],A[right--]);
            }
        }
        return A;
    }
};
