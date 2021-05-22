#include <iostream>
#include "../header/GameObject.h"
#include "../header/Human.h"
#include "../header/Food.h"
#include "../header/Monster.h"

int main(void)
{
    char key = '0';
    std::cout << "** Human의 Food 먹기 게임을 시작합니다.**" << std::endl;

    //Human, Monster, Food의 위치는 각 인스턴스에 저장돼 있다.
    //배열에 저장할 필요가 없다.

    //출력하기 위한 배열
    char Map[10][20] = {'-',};

    Human* me = new Human(1,1,1);

    for (int height = 0; height < 10; height++)
        for (int width = 0; width < 20; width++)
            Map[height][width] = '-';
    //print
    while (true)
    {
        for (int height = 0; height < 10; height++)
        {
            for (int width = 0; width < 20; width++)
            {
                std::cout << Map[height][width];
            }
            std::cout << std::endl;
        }
        std::cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> " << std::endl;

        //입력받는다.
        std::cin >> key;

        // 옮겨진 위치 저장

        // 플래그 확인.
    }
    /*
     * Human, Monster, Food 클래스의 생성자를 정의하고
     * (필요한 경우에 랜덤 클래스의 seed 설정)
     * , move함수를 재정의(override) 하시오.
     *  이동 시 모든 경우에 10x20 격자판을 벗어나면
     *  경계선 끝가지만 이동함.
     *  Human은 사용자가 직접 a, s, d, f 로 이동하고
     *  Monster는 한 번에 2칸씩 왼쪽, 아래, 위, 오른쪽으로
     *  랜덤하게 이동한다.
     */

    return 0;
}