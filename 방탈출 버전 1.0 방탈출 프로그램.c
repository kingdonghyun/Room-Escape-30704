/*
개발자 : 김동현 , 김이루 , 정대한
개발일 :  2021. 09. 06.
문의: dhk9936@naver.com
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int main(){
	int a=0;
	int a1;
	printf("종현이가 자고있다.\n");
	printf("의문의 괴한이 80kg의 묵직한 종현이를 납치한다.\n");
	printf("종현이가 깨어나보니 교무실에 같혀있었다.\n\n\n");
	printf("교실에는 박찬호 책상, 냉장고, 시계, 노트북, 문이 있다. \n조사해보자 \n\n\n");
	printf("1.박찬호 책상  2.냉장고  3.시계  4.노트북  5.문");
	scanf("%d",&a1);
	if(a1==1)
	{
		printf("박찬호 책상\n1.책상 서랍을 열어본다.");
	}
	return 0;
}
