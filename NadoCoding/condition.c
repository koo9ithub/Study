#include <stdio.h>

int main(void) {

	// ������ ź�ٰ� ����
	// �Ϲ������� ���� (�Ϲ��� : 20��)

	/* int age = 15;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�.");
	else
		printf("�л��Դϴ�."); */

	// ���߰�� ����
	/*int age;

	printf("�� ���ΰ���? ");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.");
	} */

	// break & continue
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}

			printf("������ �л��� ���� ������.\n");
			break;

			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}	
	} */

	// &&: and, ||: or

	// switch
	/*srand(time(NULL));
	int i = rand() % 3;		// 0 ~ 2 ��ȯ
	
	switch (i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n"); break;
	defalult: printf("�����\n"); break;
	}  */

	// Up and Down
	srand(time(NULL));

	int num = rand() % 100 + 1;	// 1~100 ������ ����
	printf("����: %d\n", num);

	int answer = 0;	// ����
	int chance = 5; // ��ȸ

	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1-100): ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}

		else if (answer < num)
		{
			printf("UP \n\n");
		}

		else if (answer == num)
		{
			printf("����! \n\n");
			break;
		}
		else
		{
			printf("ERROR");
		}

	}

	return 0;
}