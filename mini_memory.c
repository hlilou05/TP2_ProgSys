#include <cstddef>
void* mini_calloc(int size_element,int number_element){
    void* mem = sbrk(size_element * number_element);
    for (size_t i = 0; i < total_size; ++i) {
        ((char*)mem)[i] = 0;
    return mem;    
}