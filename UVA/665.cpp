#include<stdio.h>
#include<string.h>
int main()
{
	int nN,nN_;
	scanf("%d",&nN);
	for(nN_=0;nN_<nN;nN_++)
	{
		int N,K;
		scanf("%d%d",&N,&K);
		int id,i,j,nCorrect=0,correct=0;
		int Pi[120],w[120][120];
		char c[120];
		for(i=0;i<K;i++)
		{
			scanf("%d",&Pi[i]);
			for(j=0;j<Pi[i]+Pi[i];j++)
				scanf("%d",&w[i][j]);
			getchar();
			scanf("%c",&c[i]);
		}
		for(id=1;id<=N;id++)
		{
			for(i=0;i<K;i++)
			{
				int flag=0;
				for(j=0;j<Pi[i]+Pi[i];j++)
				{
					if(w[i][j]==id)
						flag=1;
				}
				if(!flag&&c[i]!='=')
					break;
				if(flag&&c[i]=='=')
					break;
			}
			if(i==K)
			{
				nCorrect++;
				correct=id;
			}
		}
		if(nCorrect>1)
			printf("0\n");
		else
			printf("%d\n",correct);
		if(nN_<nN-1)
			printf("\n");
	}
	return 0;
}
