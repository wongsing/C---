#include <stdio.h>
#define N 5
//—°‘Ò∑®≈≈–Ú 
int main()
{
	void sort(int x[],int n);
	int i , *p , a[N];
	p = a;
	printf("please enter %d integer numbers:",N);
	for(i=0;i<N;i++)
		scanf("%d",p++);
	p=a;
	sort(p,N);
	for(p=a,i=0;i<N;i++,p++){
		printf("%4d",*p);
	}
	printf("\n");
	return 0;
}

void sort(int x[] , int n){
	int i , j , k, t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
			if(x[j]>x[k]) k = j;
			if(k!=i){
				t = x[i];x[i]=x[k];x[k]=t;
			}
	}
}

void sort1(int *x , int n){
	int i , j , k ,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(*(x+j)>*(x+k)) k= j ;   //*(x+j)--->x[j]9ik
			if(k!=j){
				t = *(x+i);
				*(x+i)=*(x+k);
				*(x+k)=t;
			}
		}
	}
}
