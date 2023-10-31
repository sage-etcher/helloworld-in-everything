#include <stdio.h>
#include <stdlib.h>


/* main entry point */
int
main (void)
{
	printf ("Hello, World!\n");	/* print hello world to the stdout device */
	fflush (stdout);		/* flush the stdout device, required on some systems */

	return EXIT_SUCCESS;		/* return a success */
}


/* end-of-file */
