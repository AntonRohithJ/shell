#include "headers.h"


void shell_loop(char** env){
    char* input = NULL;
    size_t capacity = 0;
    char** args;
    while(1){
        ssize_t length = getline(&input,&capacity,stdin);
        printf("\nmy_shell>");
        if(length == -1){   //  EOF , Ctrl+D
            if(feof(stdin)){
                printf("Error Number : %d\n",errno);
                printf("End of file reached\n");
            }
            else{
                printf("Error Number : %d\n",errno);
                perror("getline");
            }
            break;
        }
        // printf("input :%s",input);

        //parsing
        args = input_parse(input);
    }
}

int main(int argv, char** argc, char** env){
    (void)argv;
    (void)argc;
    shell_loop(env);
    return 0;
}