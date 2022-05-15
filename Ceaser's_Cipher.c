#include<stdio.h>
#include<stdlib.h>
void print_input(char *tmp, int num){
    char value[400];
    strcpy(value, tmp);
    printf("plain text is: %s and shift is: %d \n", value, num);
}

int main(int argc, char *argv[])
{
    char message[1000];
    char ch;
    int i;
    int key = atoi(argv[2]);
    print_input(argv[1], atoi(argv[2]));
    strcpy(message, argv[1]);

    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
        if(ch > 'z'){
            ch = ch - 'z' + 'a' - 1;
        }
        message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
        if(ch > 'Z'){
            ch = ch - 'Z' + 'A' - 1;
        }
        message[i] = ch;
        }
    }
    printf("Encrypted message: %s", message);
    return 0;
}
