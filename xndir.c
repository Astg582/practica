#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int zuig(int*, int);
int max(int*, int);
double mij(int*, int);
void swap(int*, int*);
void sort(int*, int);

int main()
{   
    int s = 0;
    printf(" enter to size\n");
    scanf("%d", &s);
    

    int* arr = malloc(sizeof(int) * s);
    printf("enter to value in arr\n");
    for(int i = 0; i < s; ++i){
    scanf("%d", (arr + i));
    }
    sort(arr, s);
    
    for(int i = 0; i < s; ++i){
    printf("%d ", *(arr + i));
    }


/*    int* arr1 = malloc(sizeof(int) * s);
    printf("enter to 2 arr");
    for(int i = 0; i < s; ++i){
    scanf("%d", (arr1 + i));
    }

    for(int i = 0; i < s; ++i){
    printf("%d", *(arr1 + i) * *(arr + i));
    }
    //int max1 = max(arr, s);
    printf("%d", max1);*/

   
//    double a = mij(arr, s);
//    printf("%f", a); 
    //free(arr1);
    free(arr);
    //arr = NULL;
}

void sort(int* arr, int s){
   
    
    for(int i = 0; i < s; ++i){
        for(int j = i + 1; j < s; ++j){ 
         if(*(arr + i) > *(arr + j)){
               int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
           }   
        }
    }
}

void swap(int* a, int* s){
    int tmp = *a;
    *a = *s;
    *s = tmp;
}

int zuig(int* arr, int s){
    int count = 0;
    for(int i = 0; i < s; ++i){
        if(*(arr + i) % 2 == 0){
            ++count;
        }
    }
    return count;
}

double mij(int* arr, int s){
    double a = 0;
    double e = 0;
    for(int i = 0; i < s; ++i){
        e += *(arr +i); 
    }
    a = e / s;
    return a;
}
int max(int* arr, int s){
    int m = INT_MIN;
    for(int i = 0; i < s; ++i){
        if(m < *(arr + i)){
            m = *(arr + i);
        }
    } 
    
    return m;
}
