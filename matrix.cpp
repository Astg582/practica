#include<iostream>

int main(){

    int s1 = 0;
    int s2 = 0;
    std::cout << " enter 2 size" << std::endl; 
    std::cin >> s1;
    std::cin >> s2;

    int** arr = new int* [s1];

    for(int i = 0; i < s1; ++i){
        arr[i] = new int[s2];
    }


    for(int i = 0; i < s1; ++i){
       
        for( int j = 0; j < s2; ++j){

            std::cin >> arr[i][j];
/*            if( i % 2){
         
               arr[i][j] = s2 - j;
         
            }else{
                arr[i][j] = j + 1;
            }*/
        }
    }

    for(int i = 0; i < s1; ++i){
        for(int j = 0; j < s2; ++j){
            for(int k = j + 1; k < s2; ++k){
                if(arr[i][j] > arr[i][k]){
                    std::swap(arr[i][j], arr[i][k]);
                  }
            }
        }
    }
    

/*  
    for(int i = 0; i < s1; ++i){
        for(int j = 0; j < s2; ++j){
            if((i + j) % 2){
                arr[i][j] = 1;
            }else{
            arr[i][j] = 0;
            }
        }
    } 
  */  
    for(int i = 0; i < s1; ++i){
        for(int j = 0; j < s2; ++j){
            std::cout << arr[i][j] << "  ";

         }
        std::cout<<std::endl;
    } 

    for(int i = 0; i < s1; ++i){
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
}
