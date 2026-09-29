#include<stdio.h>
int main() {
    int rows = 5;
    int n = rows;
    for(int i = 0; i < 2*n-1; i++) {
        int comp = (i < n) ? 2*(n - i)-1
                         : 2*(i - n+1)+1;

        for(int j = 0; j < comp; j++) 
            printf(" ");
            for(int k = 0; k < 2*n-comp; k++) 
                printf("* ");
        printf("\n");
    }
    return 0;
}
