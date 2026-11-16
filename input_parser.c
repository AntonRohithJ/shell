#include "headers.h"

char** input_parse(char* input){
    size_t  buffer_limit = MAX_INPUT;
    char** tokens = malloc(buffer_limit*sizeof(char *));
    char* token = NULL;
    size_t token_length = 0;
    if(!tokens){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    return tokens;
}