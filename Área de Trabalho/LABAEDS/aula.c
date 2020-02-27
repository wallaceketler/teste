#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void maxmin1(int *p)
{
	int *end;
	end=p;
	int max=*p;
	int min=*p;
	clock_t t1,t2;
	t1=clock();
	for(p; p<(end+1000000); p++)
	{
		if(*p>max)
		{
			max=*p;
		}
		if(*p<min)
		{
			min=*p;
		}
	}
	printf("O máximo é: %d ", max);
	printf("O mínimo é: %d ", min);
	t2=clock();
	float T=(((float)t2-(float)t1/1000000.0F));
	printf("%f", T);
}
void maxmin2(int *p)
{
	int max=*p;
	int min=*p;
	int *end;
	end=p;
	clock_t t1,t2;
	t1=clock();
	for(p; p<(end+1000000); p++)
	{
		if(*p>max)
		{
			max=*p;
		}
		else if(*p<min)
		{
			min=*p;
		}
	}
	printf("O máximo é: %d ", max);
	printf("O mínimo é: %d ", min);
	t2=clock();
	float T=(((float)t2-(float)t1/1000000.0F));
	printf("%f", T);
}
void maxmin3(int *p)
{
	int FimDoAnel;
	int min;
	int max;
	int i;
	clock_t t1,t2;
	t1=clock();
	if(1000000%2>0)
	{
		*(p+1000001)=*(p+1000000);
		FimDoAnel=1000000;
	}
	else
	{
		FimDoAnel=1000000-1;
	}
	if(p>p+1)
	{
		max=*p;
		min=*(p+1);
	}
	else
	{
		max=*(p+1);
		min=*p;
	}
	i=3;
	while(i<=FimDoAnel)
	{
		if(*(p+2)>*(p+3))
		{
			if(*(p+2)>max)
			{
				max=*(p+2);
			}
			if(*(p+3)<min)
			{
				min=*(p+3);
			}
		}
		else
		{
			if(*(p+3)>max)
			{
				max=*(p+3);
			}
			if(*(p+2)<min)
			{
				min=*(p+2);
			}
		}
	}
		printf("O máximo é: %d ", max);
		printf("O mínimo é: %d ", min);	
		t2=clock();
		float T=(((float)t2-(float)t1/1000000.0F));
		printf("%f", T);
}
int main()
{
		int vet[1000000];
		int *p=vet;
		for(int i=1; i<1000000; i++)
		{
			vet[i]=rand()%1000001;
			//printf("%d ", vet[i]);
		}
		maxmin1(p);
		maxmin2(p);
		maxmin3(p);
 return 0;
}
		
		
