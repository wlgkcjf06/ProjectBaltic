// Navy game thingy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include<cstdlib>
#include<time.h>
using namespace std;

bool hr_half() {
    int hitnumber;
    hitnumber = rand();
    if (hitnumber % 2 == 1) {
        return true;
    }
    if (hitnumber % 2 == 0) {
        return false;
    }
}
void perry_main() {

}
void spruance_main() {

}
void kidd_main() {

}
void ticonderoga_main() {

}
void campaign_us() {
    cout << "\n당신은 미국을 선택하셨습니다. 사회주의자 놈들에게 본때를 보여줄 시간입니다.\n";
    cout << "당신의 배를 선택하십시오. 배의 성능이 좋아질수록 더 어려운 임무를 받게 됩니다.\n\n";
    cout << "1. 올리버 해저드 페리급 호위함 USS McClusky (맥클러스키)\n미국 해군의 주력 호위함으로 다양한 임무를 수행할수 있습니다.\nSM-1 함대공 미사일과 RGM-84 하푼 대함 미사일을 탑재합니다.\n\n";
    cout << "2. 스프루언스급 구축함 USS Fletcher(플레처)\n미국 해군의 대잠 구축함으로 지상공격과 대잠방어에 특화되어 있습니다.\nBGM-109 토마호크 순항 미사일과 RUM-139 VL-ASROC 대잠 미사일을 탑재합니다.\n\n";
    cout << "3. 키드급 구축함 USS KIdd(키드)\n소량 운용된 미국 해군의 방공 구축함으로 중거리에서 강력한 방공망을 자랑합니다.\nSM-2 함대공 미사일과 RGM-84 하푼 대함 미사일을 탑재합니다.\n\n";
    cout << "4. 타이콘데로가급 순양함 USS Bunker Hill(벙커힐)\n최신형 이지스 순양함으로 방공, 대지공격, 대잠방어 전부 효과적으로 수행할 수 있습니다.\nMk.41 VLS 122셀에 다양한 무장들을 탑재하며 RGM-84 하푼 대함 미사일도 탑재합니다.\n\n";
    int chosen = 1;
    while (chosen) {
        cout << "무슨 배를 선택하시겠습니까?";
        int shipselection;
        cin >> shipselection;
        if (shipselection == 1) {
            perry_main();
            chosen = 0;
        }
        else if (shipselection == 2) {
            spruance_main();
            chosen = 0;
        }
        else if (shipselection == 3) {
            kidd_main();
            chosen = 0;
        }
        else if (shipselection == 4) {
            ticonderoga_main();
            chosen = 0;
        }
        else {
            cout << "그런 배는 존재하지 않습니다. 다시 골라주세요\n";
        }
    }
}
void krivak_main() {

}
void udaloy_main() {

}
void sovremenny_main() {

}
void slava_main() {

}
void kirov_main() {

}
void campaign_su() {
    cout << "\n동무는 조국 소련을 선택했다. 자본주의 돼지들에게 본때를 보여줄 시간이다.\n";
    cout << "동무의 배를 선택하라. 배의 성능이 좋아질수록 더 어려운 임무를 받게 된다.\n\n";
    cout << "1. 크리박||급 호위함 Revnostnyy(레브노스트니)\n소련 해군의 대잠 호위함으로 잠수함과 효과적으로 교전할수 있다.\nRBU-6000 대잠 로켓과 SS-N-14 사일렉스 대잠/대함 미사일, SA-N-4 게코 대공 미사일을 탑재한다.\n\n";
    cout << "2. 우달로이급 구축함 Severomorsk(세베로모르스크)\n소련 해군의 대잠 구축함으로 잠수함 및 수상함과 효과적으로 교전할수 있다.\nRBU-6000 대잠 로켓과 SS-N-14 대함 미사일, SA-N-9 건틀렛 대공 미사일을 탑재한다.\n\n";
    cout << "3. 소브레멘니급 구축함 Okrylennyy(오킬레니)\n소련 해군의 다목적 구축함으로 다양한 신기술이 대거 채용되었다.\nSA-N-12 그리즐리 대공 미사일과 P-270 모스킷 대함 미사일, RBU-1000 대잠 로켓을 장착한다.\n\n";
    cout << "4. 슬라바급 순양함 Slava(슬라바)\n소련 해군의 순양함으로 대수상 전투에 특화되어 있다.\nP-500 바잘트 대함 미사일과 SA-N-6 대공 미사일, SS-N-14 사일렉스 대잠 미사일을 탑재한다.\n\n";
    cout << "5. 키로프급 원자력 순양함 Kalinin(칼리닌)\n세계 최대의 순양함으로 모든 임무를 완벽하게 수행 가능하다.\nP-700 그라니트 대함 미사일과 SA-N-6 대공 미사일, SA-N-9 건틀렛 대공 미사일, CADS-N-1 카쉬탄 근접방어체계, SS-N-15 스타피시 대잠 미사일, Udav-1 254mm 대잠 폭뢰를 탑재한다.\n\n";
    int chosen=1;
    while (chosen) {
        cout << "동무는 무슨 배를 선택하겠는가?";
        int shipselection;
        cin >> shipselection;
        if (shipselection == 1) {
            krivak_main();
            chosen = 0;
        }
        else if (shipselection == 2) {
            udaloy_main();
            chosen = 0;
        }
        else if (shipselection == 3) {
            sovremenny_main();
            chosen = 0;
        }
        else if (shipselection == 4) {
            slava_main();
            chosen = 0;
        }
        else if (shipselection == 5) {
            kirov_main();
            chosen = 0;
        }
        else {
            cout << "그런 배는 존재하지 않는다. 다시 골라라.\n";
        }
    }
}
int main()
{
    
    cout << "해전게임 by LOVE_KUROKO\n";
    while (1) {
        cout << "게임을 시작하시겠습니까?(Y/N)";
        string gs_input;
        cin >> gs_input;
        if ((gs_input == "Y") || (gs_input == "y"))
        {
            cout << "\n\n";
            cout << "1990년 소련에서 일어난 군사 쿠데타로 인해 제 3차 세계대전이 시작되었습니다. 미국과 소련은 전쟁에 들어갔습니다.\n";
            cout << "어느 진영을 선택하시겠습니까?\n";
            cout << "미국을 고르려면 0, 소련을 고르려면 1을 누르십시오\n";
            int faction_input;
            cin >> faction_input;
            if (faction_input == 0) {
                campaign_us();
            }
            else if (faction_input == 1) {
                campaign_su();
            }
            return 0;
        }
        else if ((gs_input == "N") || (gs_input == "n")) {
            cout << "게임을 종료합니다.\n";
            return 0;
        }
        else {
            cout << "알수 없는 명령어입니다.\n";
        }
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
