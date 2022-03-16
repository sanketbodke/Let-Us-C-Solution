#include<stdio.h>
void peravg(float *,float *);
int main()
{
    float per,avg;
    peravg(&avg,&per);
    printf("Average is %f\nPercentage is %f\n",avg,per);
    return 0;
}
void peravg(float *avg,float *per)
{
    int s1,s2,s3;
    printf("Enter 3 subjects marks: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    *avg = *per = (s1 + s2 + s3) / 3;
}

/* 

#include<stdio.h>
void peravg(int,int,int,float *,float *);
int main()
{
    int s1,s2,s3;
    float avg,per;
    printf("Enter 3 subjects marks: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    peravg(s1,s2,s3,&avg,&per);
    printf("Avg is %f\nPercentage is %f\n",avg,per);
    return 0;
}
void peravg(int s1,int s2,int s3,float *avg,float *per)
{
    *avg = *per = (s1 + s2 + s3) / 3;
}

*/