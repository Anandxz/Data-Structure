#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
         int oc=0;
         for (int i = 0; i < n; i++) {
            oc=oc+a[i];
            
        }
        int fn=0;
        for (int i = 0; i < n; i++) {
            if((a[i]-y)>=0){
                 fn=fn+(a[i]-y);
            
            }
            
        }
        int final=x+fn;
        if(final<oc){
            printf("\nCoupon");
        }
        else{
            printf("\nNO Coupon");
        }
}
}
