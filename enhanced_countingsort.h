/*
* This file is part of jegue_sort lib
*/


/*
* These functions are able to sort negative integers
*/
void couting_sort(long **in_array, long len_array);
void couting_sort_min_max(long **in_array, long len_array, long min_value, long max_value);

/*
* These functions are only able to sort integers greater than 0
*/
void couting_sort_naturalnumbers(long **in_array, long len_array);
void couting_sort_naturalnumbers_max(long **in_array, long len_array, long max_value);
