#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i,k=0;
	for( i=0x20; i<0x6f; i++) {
		
		if( k++ %10==0 ){
		printf("\n");
		} 
		printf("%c=%d ",i,i);
	} 

return 0;
}

