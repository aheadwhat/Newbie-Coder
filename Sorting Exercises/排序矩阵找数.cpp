%% Find the target number in a sorted array

class Finder {
public:
    bool findX(vector<vector<int> > mat, int n, int m, int x) {
        // write code here
        if(n<1||m<1) return false;
        int p=0;
        int q=m-1;
        while(p<n&&q>=0){
            if(mat[p][q]==x) return true;
            else if(mat[p][q]>x){
                --q;
            }
            else ++p;
        }
        return false;
    }
};
