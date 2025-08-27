#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int random_offset = rand() % 26;
    char random_char = 'A' + random_offset;
    return random_char;
}