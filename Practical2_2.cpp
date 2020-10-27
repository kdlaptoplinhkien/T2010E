#include <stdio.h>
#include "hamtbcong.h"


int main(){

	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	
	int arr[n];
	
	
	
	float tcb=TrungBinhCong(arr,n);
	printf("trung binh cong cua mang la %f",tcb);
}

