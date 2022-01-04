//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int s=0,e=0,l=0,p=1,res=0;
        for(e=0;e<n;e++)
        {
            p*=a[e];
            while(s<e && p>=k)
            {
                p/=a[s];
                s++;
            }
            if(p<k)
            {
                l=e-s+1;
                res=res+l;
            }
        }
        return res;
    }
