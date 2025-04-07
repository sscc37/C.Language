//2개의 2차원 벡터로 내적, 외적을 구하는 프로그램

#include <stdio.h>
#include <math.h>

int main(void)
{



	//1. 변수선언
	float  a1, b1;
	float  a2, b2;
	float sumx, sumy;
	float dotproduct;
	float crossproduct;


	//2. x벡터의 x좌표 입력
	printf("x벡터의 x좌표를 입력하세요 :");
	scanf_s("%f", &a1);


	//3. x벡터의 y좌표 입력
	printf("x벡터의 y좌표를 입력하세요 :");
	scanf_s("%f", &b1);

	//4. y벡터의 x좌표 입력
	printf("y벡터의 x좌표를 입력하세요 :");
	scanf_s("%f", &a2);


	//5. y벡터의 y좌표 입력
	printf("y벡터의 y좌표를 입력하세요 :");
	scanf_s("%f", &b2);



	//6. 내적
	sumx = a1 * a2;
	sumy = b1 * b2;
	dotproduct = sumx + sumy;

	printf("내적 결과 : %.f\n", dotproduct);
	printf("sumx = %.f * %.f\n", a1, b1, sumx);
	printf("sumy = %.f * %.f\n", b1, b2, sumy);
	printf("내적 = sumx + sumy = %f + %f = %f\n", sumx, sumy, dotproduct);





	//7. 외적
	sumx = a1 * a2;
	sumy = b1 * b2;
	crossproduct = sumx - sumy;

	printf("외적 결과 : %.f\n", crossproduct);
	printf("sumx = %.f * %.f\n", a1, b1, sumx);
	printf("sumy = %.f * %.f\n", b1, b2, sumy);
	printf("외적 = sumx - sumy = %f - %f = %f\n", sumx, sumy, dotproduct);




}

