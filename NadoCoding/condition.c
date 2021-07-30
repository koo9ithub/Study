#include <stdio.h>

int main(void) {

	// 버스를 탄다고 가정
	// 일반인으로 구분 (일반인 : 20세)

	/* int age = 15;
	if (age >= 20)
		printf("일반인 입니다.");
	else
		printf("학생입니다."); */

	// 초중고로 구분
	/*int age;

	printf("몇 살인가요? ");
	scanf_s("%d", &age);

	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.");
	} */

	// break & continue
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}

			printf("나머지 학생은 집에 가세요.\n");
			break;

			printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
		}	
	} */

	// &&: and, ||: or

	// switch
	/*srand(time(NULL));
	int i = rand() % 3;		// 0 ~ 2 반환
	
	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	defalult: printf("몰라요\n"); break;
	}  */

	// Up and Down
	srand(time(NULL));

	int num = rand() % 100 + 1;	// 1~100 사이의 숫자
	printf("숫자: %d\n", num);

	int answer = 0;	// 정답
	int chance = 5; // 기회

	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1-100): ");
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
			printf("정답! \n\n");
			break;
		}
		else
		{
			printf("ERROR");
		}

	}

	return 0;
}