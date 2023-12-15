#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef struct malloc_element {
    void* ptr;                     
    size_t size;                    
    int status;                     
    struct malloc_element* next;   
} malloc_element;

malloc_element* malloc_list = NULL;
void* mini_calloc(int size_element,int number_element){
malloc_element* current_element = malloc_list;
    while (current_element != NULL) {
        if (current_element->status == 0 && current_element->size >= size_element*number_element) {
            current_element->status = 1;
            return current_element->ptr;
        }
        current_element = current_element->next;
    }
    void* memoire = sbrk(size_element * number_element);
    return memoire;    
}
void mini_exit() {
    while (malloc_list != NULL) {
        malloc_element* next_element = malloc_list->next;
        sbrk(-(sizeof(malloc_element) + malloc_list->size));
        malloc_list = next_element;
    }
}
void mini_exit(){
    mini_exit_string();
    _exit(0);
}
void mini_perror(char *message) {
    perror(message);
}