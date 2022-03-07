#include<stdio.h>
#include<stdbool.h>

void bubble_sort();
void swap_num();
int main(){
    int a[8] = {3,2,4,5,1,6,8,7};

    bubble_sort(&a[0], 8);
    printf("\n\n\n**********\n\n\n");
    for(int i = 0; i < 8; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    getchar();
    
}

// 冒泡排序
void bubble_sort(int a[],int n){
    int i,j;
    bool change = true;
    int tmp = 0;

    for(int i = 0; i < 8; i++){
        printf("a[%d] = %d\n", i, a[i]);
        }

    for(i = n-1; i >= 1 && change; --i){
        change == false;
        for(j = 0; j < i; ++j){
            if(a[j] > a[j+1]){
                swap_num(&a[j],&a[j+1]);
            }

        }
    }
}

// 交换数值
void swap_num(int *a ,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}