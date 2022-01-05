//https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/#
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        int r=M%N;
        int ans=K+r-1;
        if(ans==0)
            return N;
        if(ans<=N)
            return ans;
        else
        {
            ans=ans-N;
            return ans;
        }
    }
};
