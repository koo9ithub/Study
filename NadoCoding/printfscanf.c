#include <stdio.h>

int main_printfscanf(void) {
	
	//������ ������ ���� ����
	/* int age = 12;
	printf("%d\n", age);
	
	age = 13;
	printf("%d\n", age);

	printf("1\n");
	printf("2\n");
	printf("3\n"); */

	//�Ǽ��� ������ ���� ����
	/* float f = 46.5f;
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d); */

	//����� ���� ����
	/* const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR); */

	//printf
	//����
	/* int add = 3 + 7;	//10

	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);	//���� ��� */

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/* int input;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);

	printf("�Է°� : %d\n", input);

	int one, two, three;

	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three); */

	//����(�� ����), ���ڿ�(���� ����)
	/* char c = 'A';
	printf("%c\n", c);

	char str[256];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str, sizeof(str));

	printf("%s", str); */


	//������Ʈ
	//�������� �������� ������ �Լ� (���� �ۼ�)

	char name[256];
	
	printf("�̸� : ");
	scanf_s("%s", name, sizeof(name));

	int age;

	printf("���� : ");
	scanf_s("%d", &age);

	float weight;

	printf("������ : ");
	scanf_s("%f", &weight);

	double height;

	printf("Ű : ");
	scanf_s("%lf", &height);

	char what[256];

	printf("���˸� : ");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf(" �̸�	: %s\n", name);
	printf(" ����	: %d\n", age);
	printf(" ������	: %.2f\n", weight);
	printf(" Ű	: %.2lf\n", height);
	printf(" ���˸�	: %s\n", what);


	return 0;
}