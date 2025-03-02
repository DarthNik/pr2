#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void logging(const char* lfp){
    FILE* fp;
    if (access(lfp, 0) == -1)
        fp = fopen("log_file.txt", "w");
    else {fp = fopen(lfp, "w");}
    if (access(lfp, 2) == -1){
	fprintf(stderr, "can't open log file for writing"); 
	exit(1);
    }
    dup2(fileno(fp), 1);
}
