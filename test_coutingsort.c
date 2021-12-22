
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIMUM_VALUE 1000000
#define MINIMUM_VALUE -1000000
#define ARRAY_LENGTH 1000000
#define TEST_ROUNDS 30

int main(){
	
    float average_time = 0;
    
    long* caotic_array = (long*)malloc(sizeof(long)*ARRAY_LENGTH);
    
    srand(time(NULL));
    
    for(int r = 0; r < TEST_ROUNDS; r++){
	
    
    	for(int i = 0; i < ARRAY_LENGTH; i++){
        
        	caotic_array[i] = (((long)rand())*((long)rand()))%MAXIMUM_VALUE;
        	
        	if(rand()%10000>9000){
        		caotic_array[i] *= -1;
			}
        	if(caotic_array[i]<MINIMUM_VALUE){
        	    caotic_array[i] = MINIMUM_VALUE;
        	}
        
    	}
    
    	clock_t begin, end;
    
    	begin = clock();
    
    	e_couting_sort(&caotic_array, ARRAY_LENGTH);
    
    	end = clock();
    	
    	average_time += (float)(end - begin)/CLOCKS_PER_SEC;
    	
    	printf("Partial time: %f\n",(float)(end - begin)/CLOCKS_PER_SEC);
    	
    
	}
    
    
    
    printf("Average time: %f\n",average_time/TEST_ROUNDS);
    
}
