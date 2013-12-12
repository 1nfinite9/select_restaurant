#include <stdio.h>
#include <time.h>

#define COUNT 4

static char rest_list[COUNT][20] = {"Matsuya", "Curry", "Burger King", "Bentou"};

int main()
{
    int seed;
    srand(time(NULL));
    
    seed = rand() % COUNT;
    
    printf("Eat %s(%d) today!\n", rest_list[seed], seed+1);
}