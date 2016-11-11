#include <stdio.h>
#include <string.h>
int main()
{
	char cube1[7],cube2[7],cube[12];
	int i,j,flag,found;
	while(scanf("%s",cube)!=EOF)
	{
		for(i=0;i<6;i++)
			cube1[i]=cube[i];
		flag=0;
		while(i<12)
			cube2[i-6]=cube[i++];
		for(i=0;i<3;i++)
		{
			found=0;
			for(j=0;j<6;j++)
			{
				if(cube1[i]==cube2[j]&&cube1[5-i]==cube2[5-j])
				{
					found=1;
					cube2[j]='0';
					cube2[5-j]='0';
					break;
				}
			}
			if(!found)
				break;
		}
		if(!found)
		{
			printf("FALSE\n");
			continue;
		}
		printf("TRUE\n");
	}
	return 0;
}
