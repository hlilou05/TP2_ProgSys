#include <cstddef>
#include <stddef.h>

typedef struct malloc_element {
    void* ptr;                      
    size_t size;                    
    int status;                     
    struct malloc_element* next;    
} malloc_element;
malloc_element* malloc_list = NULL;
typedef struct {
    size_t size;   
    int state;     
} MemoryBlock;
MemoryBlock* memory_blocks = NULL;
void* mini_calloc(int size_element,int number_element){
    void* mem = sbrk(size_element * number_element);
    for (size_t i = 0; i < total_size; ++i) {
        ((char*)mem)[i] = 0;
    return mem;    
}
void mini_exit() {
    while (malloc_list != NULL) {
        malloc_element* next_element = malloc_list->next;
        sbrk(-(sizeof(malloc_element) + malloc_list->size));
        malloc_list = next_element;
    }