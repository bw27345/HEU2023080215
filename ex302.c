#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void exchange(int *x,int *y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
}
int add(int p){
	int j,sump=0;
	for(j=1;j<p;j++){
		if(p%j==0){
			sump+=j;
		}
	}
	return sump;
}            //���㲢���س������������ĺ� 
int main(int argc, char *argv[]) {
	void exchange(int *x,int *y);
	int add(int p);
	int m=0,n=0,i=0,l=0; 
	int result=scanf("%d,%d",&m,&n);
	if(result==2){     //�ж��Ƿ�����Ϸ� 
	if(m>0&&m<10000&&n>0&&n<10000){    //�ж�m��n��ֵ�Ƿ��ڷ�Χ�� 
	 if(m>n){
	    exchange(&m,&n); 
     }                //ʹ m ��ֵС�� n 
	 for(i=m;i<=n;i++){
		if(i==add(i)){
            printf(l==0 ? "%d" : ",%d",i);
			l++;
			}     //�жϲ�������� 
		}
	 }
	 else{printf("error");
	 }	
     }else{printf("error");
	 }
	return 0;
}


