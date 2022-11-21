#include <stdio.h>
struct details
{
  int r;
  char name[50];
  float p;
};

int main()
{
  int i,j,temp;
  struct details s[5];
  
  for(i=0;i<5;i++)
  {
    printf("\nEnter student%d roll no.,name,percentage of marks: ",i+1);
    scanf("%d%s%.3f",&s[i].r,s[i].name,&s[i].p);
  }
  
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
      if(s[j].p>s[i].p)
      {
        temp=s[i].p;
        s[i].p=s[j].p;
        s[j].p=temp;
      }
    }
  }
  printf("\n");
  for(i = 0;i < 5; i++)
	{
	    printf("Roll Number : %d\n", s[i].r);
		printf("Name : %s\n", s[i].name);
		printf("Percentage : %.3f\n", s[i].p);
		printf("\n");
	}
	return 0;
}
