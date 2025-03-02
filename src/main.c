#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pwd.h>
#include <getopt.h>

void users();
void processes();
void logging(const char* lfp);
void errors(const char* lfp);
void help();

int main(int argc, char* argv[]){
    int opt;
    struct option long_option[] = {
	{"users", no_argument, NULL, 'u'},
	{"processes", no_argument, NULL, 'p'},
	{"help", no_argument, NULL, 'h'},
	{"log", required_argument, NULL, 'l'},
	{"errors", required_argument, NULL, 'e' },
	{0, 0, 0, 0}
    };
    
    while ((opt = getopt_long(argc, argv, "upl:e:h", long_option, NULL)) != -1){
	switch (opt){
	    case 'u': users(); break;
	    case 'p': processes(); break;
	    case 'h': help(); break;
	    case 'l': logging(optarg); break;
	    case 'e': errors(optarg); break;
	    default:
		fprintf(stderr, "Unknown option. Use -h for help\n");
		exit(1);
	}
    }
    return 0;
}
