#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5}; 
    int phantu;
    printf("nhap phan tu can tim ");
    scanf("%d", &phantu);
    for (int i = 0; i < 5; i++) {
        if (array[i] == phantu) {
            printf("vi tri phan tu trong mang la %d\n", i); 
			 return 0; 
        }
    }
    printf("phan tu khong ton tai trong mang.\n");
    return 0;
}

