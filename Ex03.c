#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* 가위바위보 게임
* 가위 = 1, 바위 = 2,보 = 3 
* 입력 값 = 컴퓨터 : 2, 나 : 2
* 출력 값 = 비겼습니다.
* "나" 가 이길때까지
*/

int main() {
	int a=0;
	int b=0;
	while (1 == 1) {
		printf("가위바위보 게임입니다. 가위:1, 바위:2, 보:3 \n");
		printf("컴퓨터 : ");
		scanf_s("%d", &a);
		printf("나 : ");
		scanf_s("%d", &b);
		if (a - b == 2) { 
			printf("이겼습니다.");
			break;
		}
		else if (a - b == 1) {
			printf("패배했습니다.");
		}
		else if (a - b == 0) {
			printf("비겼습니다.");
		}
		else if (a - b == -2) {
			printf("패배했습니다.");
		}
		else if (a - b == -1) {
			printf("이겼습니다.");
			break;
		}
	}
}
/*
* 제가 생각한 내용은 
* 가위 바위 보를 문자가 아닌 숫자로 입력을 받기 때문에
* 두수의 차이를 기준으로 if문을 짰습니다.
* 예)
* 가위 = 1 바위 = 2 보 = 3 
* 나 : 3(보)
* 컴퓨터 : 1(가위)
* 차이가 2 패배
* 나: 1(가위)
* 컴퓨터 : 3(보)
* 차이가 -2 승리
* 비길경우 차이는 0
*/