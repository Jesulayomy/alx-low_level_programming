#include "main.h"

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	    char *concat;

	        concat = string_nconcat(NULL, NULL, 6);
		    printf("%s\n", concat);
		        free(concat);
			    return (0);
}
