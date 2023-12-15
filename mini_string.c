int BUF_SIZE = 1024;
char *buffer[1024];
int ind=-1;
int main(int argc,char *argv[]){
    return 1;
}
void mini_exit_string(){
    write(1,buffer ,ind);
}
void mini_printf (char*msg){
    
    if (ind == -1){
        mini_calloc(sizeof(char) , BUF_SIZE);
        ind = 0;
    }
    for (int i =0 ; i<strlen(msg) ; i++){
        buffer[ind++]=msg[i];
        if(ind == BUF_SIZE || msg[i]== '\n'){
            write( 1, buffer , ind);
            ind=0;
        }
    }

}
int mini_scanf(char* buffer, int size_buffer){
   int n;
   for (int i =0 ; i<size_buffer ; i++) {
       char c;
       n = read (0 , &c , 1);
       buffer[i]=c;
       if (buffer[i]=='\n'){
           break;
       }
   }
   return n;
}
int mini_strlen(char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int mini_strcpy(char* s, char* d) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        d[i] = s[i];
    }
    d[i] = '\0'; 
    return mini_strlen(s);
}
int mini_strcmp(char* s1, char* s2) {
if (mini_strlen(s1) == mini_strlen(s2)) {
for (int i = 0; i < mini_strlen(s1); i++) {
if (s1[i] != s2[i]) {
return 1;
        }
    }
return 0;
    }
return 1;
    }




