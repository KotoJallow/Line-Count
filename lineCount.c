#include <stdio.h>

int main(int argc,char **argv){
	if(argc < 2){
		fprintf(stderr,"File required");
		return -1;
	}
	FILE *fp = fopen(argv[1],"r");
	
	if(!fp){
		fprintf(stderr,"Error in opening file");
		return -1;      
	}
	
	int count = 1; //if a file open ,be it empty, it has atleast a newline char
	char temp;
	
	while(fscanf(fp,"%c",&temp) != -1){
		
		if(temp == 10) count++;
	}

	fprintf(stdout,"File has %d lines\n",count);
}
