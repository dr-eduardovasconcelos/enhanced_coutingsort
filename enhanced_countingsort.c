#include "enhanced_jegue_sort.h"
#include <stdlib.h>

void e_couting_sort(long **in_array, long len_array);
void e_couting_sort_min_max(long **in_array, long len_array, long min_value, long max_value);
void e_couting_sort_naturalnumbers(long **in_array, long len_array);
void e_couting_sort_naturalnumbers_max(long **in_array, long len_array, long max_value);

void e_couting_sort(long **in_array, long len_array){
	
	long max_value = -0xFFFFFF;
    long min_value = 0xFFFFFF;
    
    for(long i = 0; i < len_array; i++){
        if ((*in_array)[i] > max_value){
            max_value = (*in_array)[i];
        }
        if ((*in_array)[i] < min_value){
            min_value = (*in_array)[i];
        }
    }
    
    int* auxiliar_array = (int*)malloc(sizeof(int) * ((max_value+1)-min_value));
    
    for(int i = 0; i < (max_value + 1)-min_value; i++){
        
        auxiliar_array[i] = 0;
        
    }
    
    for(int i = 0; i < len_array; i++){
        
        ++auxiliar_array[(*in_array)[i]-min_value];
        
    }
    
    int k = 0;
    
    for(long i = 0; i < (max_value + 1) - min_value; i++){
        for(int o = 0; o < auxiliar_array[i]; o++){
            (*in_array)[k++] = i + min_value;
        }
    }
    
    free(auxiliar_array);
}

void e_couting_sort_min_max(long **in_array, long len_array, long min_value, long max_value){
	
    int* auxiliar_array = (int*)malloc(sizeof(int) * ((max_value+1)-min_value));
    
    for(int i = 0; i < (max_value + 1)-min_value; i++){
        
        auxiliar_array[i] = 0;
        
    }
    
    for(int i = 0; i < len_array; i++){
        
        ++auxiliar_array[(*in_array)[i]-min_value];
        
    }
    
    int k = 0;
    
    for(long i = 0; i < (max_value + 1) - min_value; i++){
        for(int o = 0; o < auxiliar_array[i]; o++){
            (*in_array)[k++] = i + min_value;
        }
    }
    
    free(auxiliar_array);
}

void e_couting_sort_naturalnumbers(long **in_array, long len_array){
	
	long max_value = 0;
    
    for(long i = 0; i < len_array; i++){
        if ((*in_array)[i] > max_value){
            max_value = (*in_array)[i];
        }
    }
    
    int* auxiliar_array = (int*)malloc(sizeof(int) * (max_value+1));
    
    for(int i = 0; i < (max_value + 1); i++){
        
        auxiliar_array[i] = 0;
        
    }
    
    for(int i = 0; i < len_array; i++){
        
        ++auxiliar_array[(*in_array)[i]];
        
    }
    
    int k = 0;
    
    for(long i = 0; i < (max_value + 1); i++){
        for(int o = 0; o < auxiliar_array[i]; o++){
            (*in_array)[k++] = i;
        }
    }
    
    free(auxiliar_array);
}

void e_couting_sort_naturalnumbers_max(long **in_array, long len_array, long max_value){
	
	int* auxiliar_array = (int*)malloc(sizeof(int) * (max_value+1));
    
    for(long i = 0; i < (max_value+1); i++){
        
        auxiliar_array[i] = 0;
        
    }
    
    for(long i = 0; i < len_array; i++){
        
        ++auxiliar_array[(*in_array)[i]];
        
    }
    
    int k = 0;
    
    for(long i = 0; i < (max_value+1); i++){
        for(int o = 0; o < auxiliary_array[i]; o++){
            (*in_array)[k++] = i;
        }
    }
    
    free(auxiliar_array);
}
