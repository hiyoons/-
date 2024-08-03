#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    // ArrayList 생성 및 초기화
    List list;
    int data;
    ListInit(&list);

    // 정수 1부터 9까지 데이터 저장
    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);
    LInsert(&list, 9);

    // 2. 리스트에 저장된 값을 순차적으로 참조하여 그 합을 계산하여 출력한다.

    if (LFirst(&list, &data))
    {
        int sum = 0;
        while (LNext(&list, &data))
            sum += data;

        printf("리스트 합: %d", sum);
    }

    printf("\n\n");

    // 3. 리스트에 저장된 값 중 2의 배수와 3의 배수에 해당하는 값을 모두 삭제한다.
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

    //  4. 마지막으로 리스트에 저장된 데이터를 순서대로 출력한다.
    printf("현재 데이터의 수: %d \n", LCount(&list));

    if (LFirst(&list, &data))
    {
        printf("%d ", data);

        while (LNext(&list, &data))
            printf("%d ", data);
    }

    printf("\n\n");
    return 0;
}