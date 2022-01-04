//https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
string encode(string src)
{     
    
    int l=src.length(),n=1;
    for(int i=0;i<l;i++)
    {
        if(src[i]==src[i+1])
            n++;
        else
        {
            cout<<src[i]<<n;
            n=1;
        }
    }
}     
