#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s = 0;
    scanf("%d", &s);
    int* arr = malloc(sizeof(int) * s);
    
    for(int i = 0; i < s; ++i){
    scanf("%d", (arr + i));
    }
    
    for(int i = 0; i < s; ++i){
    printf("%d ", *(arr + i));
    }
    
    free(arr);
    
    for(int i = 0; i < s; ++i){
    printf("%d ", *(arr + i));
    }
    arr = NULL;
    
}
