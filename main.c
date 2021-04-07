#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void findmax(int*, int);

int main() {
    int n;
    int * p = NULL;

    srand(time(NULL));
    printf("Введите размер массива = ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));
    for(int i = 0; i<n;i++){
        p[i] = rand()%49 + 1;
    }
    for(int i = 0; i<n;i++){
        if(i%10==0&&i!=0){
            printf("\n");
        }
        printf("%d\t ",p[i]);
    }
    findmax(p, n);


    free(p);
    return 0;
}
void findmax(int *p, int n){
    int max;
    max = p[0];
    for(int i = 0; i<n;i++){
        if (p[i]>max)
            max = p[i];
    }
    printf("\n");
    printf("Максимальный элемент массива = %d", max);
    printf("\n");
    printf("Индексы максимальных элементов массива ");
    for(int i = 0; i<n;i++){
        if (p[i]==max) printf("i = %d ", i);
    }
}