#include <stdio.h>

int main() {
int T;
    scanf("%d", &T);
    
    while(T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        
        for(int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Find maximum
        int max = A[0];
        for(int i = 1; i < N; i++) {
            if(A[i] > max) {
                max = A[i];
            }
        }
        
        printf("%d\n", max);
    }
    
    return 0;
}
