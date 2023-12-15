#ifndef MINI_MEMORY_H
#define MINI_MEMORY_H
void* mini_calloc (int size_element, int number_element) ; //prototype de la fonction mini_calloc
void mini_free(void* ptr); //prototype de la fonction mini_free
void mini_exit(); // prototype de la fonction mini_exit
void mini_afficher(); //prototype de la fonction mini_afficher qui permet d'afficher la liste chainée allouée par la fonction mini_calloc
void mini_printf(char* ); //prototype de la fonction mini_printf
void mini_exit_string();//prototype de la fonction mini_exit_string qui vide le buffer
int mini_scanf(char* buffer , int size_buffer); //prototype de la fonction mini_scanf
int mini_strlen (char* s); //prototype de la fonction mini_strlen
int mini_strcpy(char* s , char*d); //prototype de la fonction mini_strcpy
int mini_strcmp(char* s1 , char* s2); //prototype de la fonction mini_strcmp
#endif
