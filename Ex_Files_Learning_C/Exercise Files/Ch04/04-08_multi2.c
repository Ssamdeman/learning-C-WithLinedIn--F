#include <stdio.h>

int main()
{
	char names[4][5] = {
		"Ant",
		"Bee",
		"Cat",
		"Duck"
	};
	int x;
	names[3][3] = 'r';
	for(x=0;x<4;x++)
		printf("%s\n",names[x]);

	return(0);
}

