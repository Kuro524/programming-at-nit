/**
�ۑ�1 ����v�Z(���[�v�����Ȃ�)
�L�[���[�h: �ϐ�,���,printf,scanf
**/

#include <stdio.h>

int main(void) {
	int money;								//���z�������邽�߂̕ϐ�
	int count;								//�e����̖����������邽�߂̕ϐ�

	printf("���z����͂��ĉ�����>");
	scanf("%d",&money);

	count = money / 10000;					//�@���z(money)��10000�Ŋ��������𖇐�(count)�ɑ�� ( = 1���~�D�̖��� )
	money = money % 10000;					//�A���z(money)��10000�Ŋ������]������z(money)�ɑ�� ( = 1���~�D�Ŏx�����镪���������c��̋��z )
	printf("�ꖜ�~�D��%d���ł�\n",count);	//�B����(count)����ʂɏo��
											//�ȉ��̏����ł͇@�`�B�܂ł̏��������鐔��ς��Ȃ���J��Ԃ��B
	count = money / 5000;
	money = money % 5000;
	printf("�ܐ�~�D��%d���ł�\n", count);

	count = money / 1000;
	money = money % 1000;
	printf("��~�D��%d���ł�\n", count);

	count = money / 500;
	money = money % 500;
	printf("�ܕS�~�ʂ�%d���ł�\n", count);

	count = money / 100;
	money = money % 100;
	printf("�S�~�ʂ�%d���ł�\n", count);

	count = money / 50;
	money = money % 50;
	printf("�܏\�~�ʂ�%d���ł�\n", count);

	count = money / 10;
	money = money % 10;
	printf("�\�~�ʂ�%d���ł�\n", count);

	count = money / 5;
	money = money % 5;
	printf("�܉~�ʂ�%d���ł�\n", count);

	printf("��~�ʂ�%d���ł�\n", money);	//1�Ŋ���������]����v�Z���Ă��Ӗ��������̂ŁA�܉~�ʂŎx�����镪���������c��̋��z�����̂܂܏o�́B

	return 0;
}