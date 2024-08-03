#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    // ArrayList ���� �� �ʱ�ȭ
    List list;
    int data;
    ListInit(&list);

    // ���� 1���� 9���� ������ ����
    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);
    LInsert(&list, 9);

    // 2. ����Ʈ�� ����� ���� ���������� �����Ͽ� �� ���� ����Ͽ� ����Ѵ�.

    if (LFirst(&list, &data))
    {
        int sum = 0;
        while (LNext(&list, &data))
            sum += data;

        printf("����Ʈ ��: %d", sum);
    }

    printf("\n\n");

    // 3. ����Ʈ�� ����� �� �� 2�� ����� 3�� ����� �ش��ϴ� ���� ��� �����Ѵ�.
    if (LFirst(&list, &data))
    {
        if (data % 2 == 0 || data % 3 == 0)
            LRemove(&list);
        while (LNext(&list, &data))
        {
            if (data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }

    //  4. ���������� ����Ʈ�� ����� �����͸� ������� ����Ѵ�.
    printf("���� �������� ��: %d \n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);
    }

    printf("\n\n");
    return 0;
}