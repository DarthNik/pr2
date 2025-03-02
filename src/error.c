#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void errors(const char* lfp){
    FILE* fp;
    if (access(lfp, 0) == -1)
        fp = fopen("error_file", "w");
    else {fp = fopen(lfp, "w");}
    if (access(lfp, 2) == -1){
	fprintf(stderr, "can't open error file for writing"); 
	exit(1);
    }
    dup2(fileno(fp), 2);
}
