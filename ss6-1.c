#include <stdio.h>

int main() {
    int e, sum = 0;
    int i; 
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &e);
        
    
        if (e % 2 != 0) {
            sum += e; 
        }
    }
    
    printf("Tong cac so le la: %d\n", sum);
    
    return 0;
}

