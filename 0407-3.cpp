//2���� 2���� ���ͷ� ����, ������ ���ϴ� ���α׷�

#include <stdio.h>
#include <math.h>

int main(void)
{



	//1. ��������
	float  a1, b1;
	float  a2, b2;
	float sumx, sumy;
	float dotproduct;
	float crossproduct;


	//2. x������ x��ǥ �Է�
	printf("x������ x��ǥ�� �Է��ϼ��� :");
	scanf_s("%f", &a1);


	//3. x������ y��ǥ �Է�
	printf("x������ y��ǥ�� �Է��ϼ��� :");
	scanf_s("%f", &b1);

	//4. y������ x��ǥ �Է�
	printf("y������ x��ǥ�� �Է��ϼ��� :");
	scanf_s("%f", &a2);


	//5. y������ y��ǥ �Է�
	printf("y������ y��ǥ�� �Է��ϼ��� :");
	scanf_s("%f", &b2);



	//6. ����
	sumx = a1 * a2;
	sumy = b1 * b2;
	dotproduct = sumx + sumy;

	printf("���� ��� : %.f\n", dotproduct);
	printf("sumx = %.f * %.f\n", a1, b1, sumx);
	printf("sumy = %.f * %.f\n", b1, b2, sumy);
	printf("���� = sumx + sumy = %f + %f = %f\n", sumx, sumy, dotproduct);





	//7. ����
	sumx = a1 * a2;
	sumy = b1 * b2;
	crossproduct = sumx - sumy;

	printf("���� ��� : %.f\n", crossproduct);
	printf("sumx = %.f * %.f\n", a1, b1, sumx);
	printf("sumy = %.f * %.f\n", b1, b2, sumy);
	printf("���� = sumx - sumy = %f - %f = %f\n", sumx, sumy, dotproduct);




}

