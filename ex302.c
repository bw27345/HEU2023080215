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
}            //计算并返回除本身外因数的和 
int main(int argc, char *argv[]) {
	void exchange(int *x,int *y);
	int add(int p);
	int m=0,n=0,i=0,l=0; 
	int result=scanf("%d,%d",&m,&n);
	if(result==2){     //判断是否输入合法 
	if(m>0&&m<10000&&n>0&&n<10000){    //判断m，n的值是否在范围内 
	 if(m>n){
	    exchange(&m,&n); 
     }                //使 m 的值小于 n 
	 for(i=m;i<=n;i++){
		if(i==add(i)){
            printf(l==0 ? "%d" : ",%d",i);
			l++;
			}     //判断并输出完数 
		}
	 }
	 else{printf("error");
	 }	
     }else{printf("error");
	 }
	return 0;
}


