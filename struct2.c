/*
 * struct2.c
 *
 *  Created on: Jan 23, 2016
 *      Author: Coder
 */

#include <stdio.h>
#include <strings.h>

struct location {
	char* description;
	float latitude;
	float longitude;
};

void foo(struct location myloc) {
	if((myloc.description != NULL)
			&& !strcmp(myloc.description, "GVSU"))
	{
		printf("Home sweet homes!\n");
		myloc.latitude = 0.0;
		myloc.longitude = 0.0;
	}
}


int main(void)
{
	struct location my_college = {"GVSU", 42.9709, -85.8857};
	printf("Come visit me %s at geo:%f, %f\n",
			my_college.description,
			my_college.latitude,
			my_college.longitude);
}
