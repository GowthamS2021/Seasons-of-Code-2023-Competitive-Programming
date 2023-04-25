#include <stdio.h>

void candyspells(int n, int t){
    int i = 0;
    int arr[40];
    int s1, s2;
    
    while (t > 0){
        while (n > 1){
            if (n % 2 == 0){
                printf("-1");
                break;
            } else {
                s1 = (n + 1) / 2;
                s2 = (n - 1) / 2;
                if (s2 % 2 != 0){
                    arr[i] = 2;
                    n = s2;
                } else if (s1 % 2 != 0){
                    arr[i] = 1;
                    n = s1;
                }
            }
            i++;
            if (i > 40){
                printf("Too many spells used.\n");
                return;
            }
        }
        if (n % 2 != 0){
        printf("no of spells used : %d",i);
        puts("");
        printf("spell order : ");
        for (int j = i - 1; j >= 0; j--){
            printf("%d ", arr[j]);
        }}
        puts("");
        t--;
        i = 0;
        // printf("Enter the number of candies you want to achieve: ");
        scanf("%d", &n);
    }
}

int main(){
    int t;
    // printf("Enter the number of test cases you want to run: ");
    scanf("%d", &t);
    
    int n;
    // printf("Enter the number of candies you want to achieve: ");
    scanf("%d", &n);
    
    candyspells(n, t);
    return 0;
}
