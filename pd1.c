#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char seq[ 1000 ];
	int len;
	int i;
	int charge=0;

	scanf("%s", seq);
	len= strlen(seq);
	if (len<3)
		{
		printf("eisai mpoumpounas\n");
		exit(1);
		}
	printf("The length was: %d\n", len);
		{
		if (seq [0]=='A' &&
		    seq [1]=='T' &&
		    seq [2]=='C')
			{
			printf("ATC presents \n");
			}
		else 
			{
			printf("ATC not present\n");
			}	
	}
}

