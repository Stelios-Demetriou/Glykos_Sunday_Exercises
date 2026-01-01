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
		if (seq [len-3]=='T' && seq [len-2]=='A' && seq [len-1]=='A')
			{
			printf("Last triplet is TAA \n");
			}
		else 
			{
			printf("Last triplet is not TAA\n");
			}	
	}
}

