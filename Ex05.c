#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*���� 1. �ܾ� ��ȸ, 2. ���, 3. �Ա�, 4. ����,
* ex) �Է� : 2 ����Ͻ� �ݾ��� �Է����ּ���
* �Է� : 5000 �ܾ�������, ��ݵǾ����ϴ�.
*			  �ܾ׺�����, �ܾ��� �����մϴ�.
* �Է� : 3 �Ա��Ͻ� �ݾ��� �Է����ּ���.
*�Է� :
* ����ڰ� 4�� �Է��� �� ���� ���
* �ܾ� 5000����
* �Է� ���� �Ұ���
* ��� ���� �Ұ���
*/

int main() {
	int jango = 5000;
	int a;
	int chul;
	int ip;
	
	while (1) {
		printf("���Ͻô� ������ ������ �ֽʽÿ�. \n 1. �ܾ� ��ȸ, 2. ���, 3. �Ա�, 4. ���� \n");
		scanf_s("%d", &a);
		if (a == 1) {
			printf("�������� ���� �ܾ��� %d���Դϴ�. \n", jango);
		}
		else if (a == 2) {
			er: //��� �ݾ��� �����̰ų� �ܰ����� ���� �ݾ��ϰ�� ���ƿ� ��ġ�Դϴ�.
			printf("����Ͻ� �ݾ��� �Է��� �ֽʽÿ�.\n* �ݾ��� 0���� �۰ų� �ܾ� �̻��̸� �Ұ����մϴ�. \n");
			scanf_s("%d", &chul);
			if (chul > jango || chul < 0) {
				printf("ó���Ҽ� ���� �ݾ��Դϴ�. \n �ٽ��Է��� �ֽʽÿ�. \n");
				goto er; // Ȯ���ϰ� ���������ϴ�.
			}
			jango -= chul;
			printf("%d�� ����� �Ϸ�Ǿ����ϴ�. \n���� �ܾ��� %d���Դϴ�.", chul, jango);
		}
		else if (a == 3) {
			ip: // �Աݿ��� �Է��� ������ ��� ���ƿ� ��ġ�Դϴ�.
			printf("�Ա��Ͻ� �ݾ��� �Է��� �ֽʽÿ�.\n* 0������ �ݾ��� �Ұ����մϴ�. \n");
			scanf_s("%d", &ip);
			if (ip < 0) {
				printf("ó���Ҽ� ���� �ݾ��Դϴ�. \n �ٽ��Է��� �ֽʽÿ�. \n");
				goto ip; //�Էµ� �Աݰ��� �������� Ȯ���ϰ� ������ ��� ���� �����ϴ�.
			}
			jango += ip;
			printf("%d�� �Ա��� �Ϸ�Ǿ����ϴ�. \n���� �ܾ��� %d���Դϴ�.", ip, jango);
		}
		else if (a == 4) {
			printf("���α׷��� �����ϰڽ��ϴ�.");
		}
		else {
			printf("ó���Ҽ����� �����Դϴ�. �ٽ��Է����ּ���.\n")
		}
	}
}

/*
* 
*/