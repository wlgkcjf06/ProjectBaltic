#include <iostream>
#include <string>
#include<cstdlib>
#include<time.h>
#include<windows.h>
using namespace std;

bool hr_half() {
    int hitnumber;
    hitnumber = rand();
    if (hitnumber % 2 == 1) {
        return true;
    }
    else{
        return false;
    }
}
bool hr_third() {
    int hitnumber;
    hitnumber = rand();
    if (hitnumber % 3 == 1) {
        return true;
    }
    else if (hitnumber % 3 == 2) {
        return true;
    }
    else {
        return false;
    }
}
void perry_attack1() {
    Sleep(2000);
    cout << "USS Nimitz 함이 제공권 확보를 위해 F-14 톰캣 전투기를 발진시킵니다.\n";
    cout << "정찰기로부터 보고가 들어왔습니다. 무르만스크 북서쪽 200km 부근에 적 순양함이 포착되었습니다.\n";
    cout << "지금 항공모함의 공격기를 발진시키겠습니까? 지금 발진시키면 미사일 사거리 밖에서 공격할수 있는 대신 공격기의 작전시간이 줄어듭니다. 0을 누르면 A-6 인트루더 공격기와 A-7 커세어 공격기를 발진시킵니다.\n";
    int input;
    cin >> input;
    if (input == 0) {
        cout << "항공모함에서 공격기가 이륙해 적 순양함을 공격합니다.\n";
        Sleep(500);
        cout << "공격기가 적 순양함에 접근하는 중입니다...\n";
        Sleep(5000);
        cout << "공격기가 적 순양함에 도달했습니다 공격을 개시합니다.\n";
        bool at1=hr_half();
        if (at1 == true) {
            cout << "적 순양함을 격침하는데 성공했습니다.\n";
            cout << "항공대가 무르만스크 공격 준비를 위해 항모로 귀환합니다.";
        }
        if (at1 == false) {
            cout << "적 순양함을 격침하는데 실패했습니다.\n";
        }
    }
    else {
        cout << "공격기의 작전시간을 늘리기 위해 순양함에 조금 더 접근해서 공격하기로 결정되었습니다.\n";
    }
}
void perry_defend1() {
    cout << "적 잠수함이 항구에서 사라졌다는 보고가 들어왔습니다.\n";
    cout << "";
}
void perry_retreat1() {

}
void perry_main() {
    cout << "\n\n올리버 해저드 페리급 호위함 USS Mcclusky를 선택하셨습니다.\n";
    cout << "본함의 임무는 USS Nimitz 함이 이끄는 항모 전단과 동행해 바렌츠 해를 통해 소련 해군의 전략적 요충지인 무르만스크를 공격하는 것입니다.\n";
    Sleep(2000);
    int carrierstate = 3;
    cout << "RF-8C 정찰기가 USS Nimitz 함에서 발진해 적 동향을 감시합니다.\n";
    bool dt1;
    int input;
    dt1 = hr_third;

    Sleep(10000);
    if (dt1 == false) {
        cout << "정찰기가 적 구축함을 발견했습니다. 0을 누르면 공격을 개시합니다. 1을 누르면 좀 더 접근합니다.\n";
        cin >> input;
        if (input == 0) {
            cout << "항공모함의 함재기가 적 구축함을 공격합니다.\n";
            Sleep(3000);
            bool ht;
            ht = hr_half();
            if (ht == true) {
                cout << "적 구축함을 격침시키는데 성공했습니다.\n";
                perry_attack1();
            }
            if (ht == false) {
                cout << "항공대의 공격이 실패했습니다.\n";
                Sleep(1000);
                cout << "하푼 미사일을 이용하여 공격하시겠습니까? 실패할경우 함대의 위치가 노출되게 됩니다.(0을 누르면 공격을 개시합니다. 다른 키를 누르면 공격하지 않습니다.)5\n";
                int input2;
                cin >> input2;
                if (input2 == 0) {
                    cout << "적 구축함에 미사일을 발사합니다.";
                    Sleep(4000);
                    bool ht2;
                    ht2 = hr_third();
                    if (ht2 == true) {
                        cout << "적 구축함을 하푼 미사일을 사용해 격침시켰습니다.\n";
                        perry_attack1();
                    }
                    if (ht2 == false) {
                        cout << "공격이 실패했습니다. 아군 함대의 위치가 노출되었습니다.\n";
                        Sleep(2000);
                        cout << "아군 순양함의 레이더가 적 대함 미사일 8발을 탐지했습니다. 40초 후 착탄합니다.\n";
                        Sleep(2000);
                        cout << "아군 순양함이 SM-2를 이용해 미사일 요격을 시도합니다.\n";
                        bool granithit1;
                        granithit1 = hr_half;
                        if (granithit1 == true) {
                            cout << "아군 순양함이 미사일 2발을 격추하는 데 성공했습니다.\n";
                            cout << "";
                        }
                        
                    }
                }
                else {

                }
            }
        }

    }
    else {
        Sleep(1000);
        cout << "적 함정이 탐지되지 않앗습니다. 해협을 통해 전진합니다. \n";

    }
        
    
}
void spruance_main() {
    cout << "\n\n스프루언스급 구축함 USS Fletcher를 선택하셨습니다.\n";
    cout << "본함의 임무는 키티호크급 항공모함 USS America를 포함한 함대를 대동해 캄차카 반도로 상륙하는 해병대원들을 지원하는 일입니다. 해병대원들을 방해하는 것들을 파괴하십시오. 또한, 함대에 접근하려는 적들을 격퇴시키십시오. ";
}
void kidd_main() {
    cout << "\n\n키드급 구축함 USS Kidd를 선택하셨습니다.\n";
    cout << "본함의 임무는 흑해로 진입해 세바스토폴에서 콘스탄차로 향하는 수송함대를 습격하는 것입니다. 길을 막는 소련 흑해함대 함선들을 격침시키고 소련 공군 항공기들을 격추시키십시오.";
}
void ticonderoga_main() {
    cout << "\n\n타이콘데로가급 순양함 USS Bunker Hill을 선택하셨습니다.\n";
    cout << "본함의 임무는 발트 해를 통과해 소련 발트 함대와 교전 및 칼리닌그라드에 설치된 지대함미사일 포대를 파괴하는 것입니다. 이 임무가 성공적으로 완수되면 해병대가 칼리닌그라드에 상륙하기 편해질 것입니다.";
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
    cout << "\n\n크리박급 호위함 Revnostnyy를 선택했다.";
    cout << "본함의 임무는 키로프급 순양함 Kalinin 함이 없는 사이 무르만스크 항을 적 공격원잠으로부터 지키는 것이다. 배에 설치된 대잠 설비를 이용해 적 잠수함을 격침시켜라.";
}
void udaloy_main() {
    cout << "\n\n우달로이급 구축함 Severomorsk를 선택했다.";
    cout << "본함의 임무는 세바스토폴에서 콘스탄차로 향하는 수송선단을 적 공격으로부터 보호하는 것이다. 이 배가 루마니아에 제시간에 도착하면 우리는 지상전에서 큰 이점을 얻을 것이다.";
}
void sovremenny_main() {
    cout << "\n\n소브레멘니급 구축함 Okrylennyy를 선택했다.";
    cout << "본함의 임무는 발트 해를 통과하려는 미국 순양함을 막는 것이다. 칼리닌그라드에 배치된 Kh-35 미사일 포대와 소련 공군기의 지원을 받을 수 있다.";
}
void slava_main() {
    cout << "\n\n슬라바급 순양함 Chervona Ukraina를 선택했다.";
    cout << "본함의 임무는 우달로이급 구축함 Admiral Tributs함과 함께 지상에 상륙한 미 해병대를 지원하는 적 함대를 찾아내 격침시키는 것이다. 적 함대에는 항공모함 및 다수의 구축함이 포함되어 있다.";
}
void kirov_main() {
    cout << "\n\n키로프급 순양함 Kalinin를 선택했다.";
    cout << "본함의 임무는 바렌츠 해에서 작전하는 미 해군 항공모함 USS Nimitz 함과 그 호위함대를 습격, 수장시키는 것이다. 무르만스크의 공군 기지에서 이륙한 아군 공군기들의 호위를 받게 될 것이다. ";
    
}
void campaign_su() {
    cout << "\n동무는 조국 소련을 선택했다. 자본주의 돼지들에게 본때를 보여줄 시간이다.\n";
    cout << "동무의 배를 선택하라. 배의 성능이 좋아질수록 더 어려운 임무를 받게 된다.\n\n";
    cout << "1. 크리박||급 호위함 Revnostnyy(레브노스트니)\n소련 해군의 대잠 호위함으로 잠수함과 효과적으로 교전할수 있다.\nRBU-6000 대잠 로켓과 URK-5 대잠/대함 미사일, 4K33 OSA-MA 대공 미사일을 탑재한다.\n\n";
    cout << "2. 우달로이급 구축함 Severomorsk(세베로모르스크)\n소련 해군의 대잠 구축함으로 잠수함 및 수상함과 효과적으로 교전할수 있다.\nRBU-6000 대잠 로켓과 RPK-3 대함/대잠 미사일, 3K95 건틀렛 대공 미사일을 탑재한다.\n\n";
    cout << "3. 소브레멘니급 구축함 Okrylennyy(오킬레니)\n소련 해군의 다목적 구축함으로 다양한 신기술이 대거 채용되었다.\n3S90 대공 미사일과 P-270 모스킷 대함 미사일, RBU-1000 대잠 로켓을 장착한다.\n\n";
    cout << "4. 슬라바급 순양함 Chervona Ukraina(체르노바 우크라이나)\n소련 해군의 순양함으로 대수상 전투에 특화되어 있다.\nP-500 바잘트 대함 미사일과 S-300F 대공 미사일, RBU-6000 대잠 로겟을 탑재한다.\n\n";
    cout << "5. 키로프급 원자력 순양함 Kalinin(칼리닌)\n세계 최대의 순양함으로 모든 임무를 완벽하게 수행 가능하다.\nP-700 그라니트 대함 미사일과 S-300F 대공 미사일, 4K33 OSA-MA 대공 미사일, 카쉬탄 근접방어체계, RPK-2 대잠 미사일, Udav-1 254mm 대잠 폭뢰를 탑재한다.\n\n";
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