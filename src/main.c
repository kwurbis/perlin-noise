#include"simplexnoise1234.h"
#include<stdio.h>

int main(){
    for (float i= 0; i<10; i=i+0.01)
    
      for (float j= 0; j<10; j=j+0.01){
        printf("%f %f %f \n", i ,j, snoise2(i, j));
        /*
        printf("%f ", snoise2(i, j));
        if (snoise2(i, j) >= 0){
            printf(" ");
        }
        */
    }  
}


