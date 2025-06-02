include <stdio.h>

int main() {
	int n,X;
	scanf("%d %d",&n,&X);
	int A[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&A[i]);
	}
	int found=0;
	for(int i=0;i<n;i++){
	    if(A[i]==X){
          found=1;
	        break;
	    }
	    
	}
	if(found){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
	}



