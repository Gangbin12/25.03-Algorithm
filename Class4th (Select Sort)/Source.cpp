// Class4th (Select Sort).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 선택 정렬
    // 주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서
    // 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

    int list[SIZE] = { 6, 2, 8, 1, 0 };

    for (int i = 0; i < SIZE; i++)
    {
        int min = list[i];

        int index = i;

        for (int j = i + 1; j < SIZE; j++)
        {
            if (min > list[j])
            {
                min = list[j];

                index = j;
            }
        }

        std::swap(list[i], list[index]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << " ";
    }

#pragma endregion

    return 0;
}