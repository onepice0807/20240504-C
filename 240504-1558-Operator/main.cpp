#include <stdio.h>

int main() {
    // ����(Variable)
    // DataType ������; // �׻���ɵڿ��� ;(�����ݷ�)�� �ٿ����մϴ�.
    // �������� ����ҹ���, _, ����(���ڴ� ù���ڷ� ����� �� �����ϴ�.)
    // �������� ���̴� visual studio 128���ڰ��� ǥ�� C�� 31����
    // �������� ���� ��Ģ�� �����ϴ� ���� �뵵�� �˷��ִ� �ܾ ������ ����Ͻô°�
    // �����ϴ�.
    int score;   // score���� �����Ѵ�. 4byte�������� ���� ��������� �Ҵ�����
    int isLive;

    // int 3num;   // �������� ù���ڷ� ���� ����� �ȵ˴ϴ�.

    int num3;

    int �ѹ�;   // ������ �ѱ� ���� ������...

    //���� �߰�ȣ ���� �ȿ��� ������ �������� ���� �� �����ϴ�.
    //float score;

    score = 20;

    // �ܼ�â�� ���� ����Ҷ� printf �Լ��� ����մϴ�.
    // printf�� �����������ڿ��� �����մϴ�.
    printf("ext socre = %d\n", score);

    {
        int score;

        score = 100;

        printf("inner score = %d\n", score);
    }





    return 0;
}