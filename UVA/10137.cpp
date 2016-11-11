#include <stdio.h>
int main(int argc,const char * argv[])
{
    long int numOfStudents;
    double total;
    double exchange;
    double equalizedAmount;
    double diff;
    double negativeSum;
    double positiveSum;
    int i;
    while(scanf("%ld",&numOfStudents)!=EOF)
    {
        if(!numOfStudents)
        {
            return 0;
        }

        double amountSpent[numOfStudents];
        total=0;
        negativeSum=0;
        positiveSum=0;

        for(i=0;i<numOfStudents;i++)
        {
            scanf("%lf\n",&amountSpent[i]);
            total+=amountSpent[i];
        }
        equalizedAmount=total/numOfStudents;

        for(i=0;i<numOfStudents;i++)
        {
            diff=(double)(long)((amountSpent[i]-equalizedAmount)*100)/100.0;

            if(diff<0)
            {
                negativeSum+=diff;
            }
            else
            {
                positiveSum+=diff;
            }
        }
        exchange=(-negativeSum>positiveSum)?-negativeSum:positiveSum;
        printf("$%.2lf\n",exchange);
    }
    return 0;
}

