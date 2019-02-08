#include <stdio.h>

/**
 *main start
 *
 *return 0 if is sucessful
 */

int main () {
	
	char dor[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(dor, sizeof(char), sizeof(dor) - 1, stderr);
  
	return(1);
}
