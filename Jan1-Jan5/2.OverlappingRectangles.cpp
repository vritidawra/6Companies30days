//https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/&sa=D&source=editors&ust=1641126076116000&usg=AOvVaw1CJyci22ae534fjMfKHLUY
int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if(L1[0]>R2[0] || R1[0]<L2[0])
            return 0;
        if(L1[1]<R2[1] || R1[1]>L2[1])
            return 0;
        
        return 1;
    }
