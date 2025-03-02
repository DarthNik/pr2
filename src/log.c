#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void logging(const char* lfp){
    FILE* fp;
    fp = fopen(lfp, "w");
    if (access(lfp, 2) == -1){
	fprintf(stderr, "can't open log file for writing\n"); 
	exit(1);
    }
    dup2(fileno(fp), 1);
}
