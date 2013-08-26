#include "utils/leak_detective.h"

void inject_leak()
{
    char *char_array = NULL;
    
    int i;
    for(i = 0; i < 2; ++i){
        char_array = malloc(10);
        /* free(char_array); */
    }
}

int main(int argc, char *argv[])
{   
    leak_detective_t *leak_detective = leak_detective_create();

    inject_leak();
    
    leak_detective->report(leak_detective, 0);        
    leak_detective->destroy(leak_detective);
    return 0;
}
