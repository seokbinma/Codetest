#include <bits/stdc++.h>
using namespace std;

/**
 * [split 함수]
 * 문자열(s)을 구분자(sep)를 기준으로 잘라서 벡터에 담아 반환합니다.
 */
vector<string> split(string s, string sep) { // literal 전달을 위해 &를 제거하거나 const를 붙이는 게 좋습니다.
    vector<string> ret;
    int pos = 0;

    while (pos < s.size()) {
        // 1. 현재 위치(pos)부터 구분자(sep)가 어디 있는지 찾습니다.
        int nxt_pos = s.find(sep, pos);

        // 2. 만약 구분자를 더 이상 찾을 수 없다면 (-1), nxt_pos를 문자열 끝으로 보냅니다.
        if (nxt_pos == -1) nxt_pos = s.size();

        // 3. 현재 위치와 다음 구분자 사이의 거리가 0보다 크면 (즉, 단어가 존재하면)
        if (nxt_pos - pos > 0) {
            // substr(시작위치, 길이)를 이용해 단어를 잘라 벡터에 넣습니다.
            ret.push_back(s.substr(pos, nxt_pos - pos));
        }

        // 4. 다음 탐색 위치를 '찾은 구분자 위치 + 구분자의 길이'로 점프합니다.
        pos = nxt_pos + sep.size();
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); // 입출력 가속

    string s = "hello";
    s += " BKD!";               // 문자열 이어붙이기 (hello BKD!)
    cout << s.size() << '\n';   // 문자열 전체 길이 출력 (10)
    
    // substr(시작 인덱스, 개수): 2번 인덱스 'l'부터 3글자 추출
    cout << s.substr(2, 3) << '\n'; // "llo"
    
    // 배열처럼 인덱스로 접근하여 한 글자 출력
    cout << s[1] << '\n';       // 'e'

    // replace(시작위치, 지울개수, 넣을문자열): 6번 인덱스부터 4글자("BKD!")를 "guys"로 교체
    s.replace(6, 4, "guys"); 
    cout << s << '\n';          // "hello guys"

    // find(찾을문자열): "guys"가 시작되는 인덱스 번호를 반환
    int it = s.find("guys");    // 6
    s.replace(it, 4, "everyone"); // "guys"를 "everyone"으로 교체
    cout << s << '\n';          // "hello everyone"

    // erase(시작위치, 지울개수): 7번 인덱스('v')부터 6글자("veryon") 삭제
    s.erase(7, 6); 
    cout << s << '\n';          // "hello ee"

    // 인덱스 접근으로 특정 글자 하나만 수정
    s[6] = 'm';                 // "hello me"
    cout << s << '\n';

    // insert(삽입위치, 넣을문자열): 0번 인덱스 맨 앞에 "say " 삽입
    s.insert(0, "say ");
    cout << s << '\n';          // "say hello me"

    // find 결과가 없으면 string::npos를 반환 (-1과 같음)
    if (s.find("to") == string::npos) {
        cout << "'to' is not in string 's'\n";
    }

    // [Split 테스트 1] 공백 기준 자르기
    vector<string> chunks1 = split("welcome to the black parade", " ");
    for (auto chunk : chunks1) cout << chunk << '/'; // welcome/to/the/black/parade/
    cout << '\n';

    // [Split 테스트 2] 여러 글자로 된 구분자("*!*") 기준 자르기
    vector<string> chunks2 = split("b*!*ac*!**!*e*!*y*!*", "*!*");
    for (auto chunk : chunks2) cout << chunk << '/'; // b/ac/e/y/ (빈 문자열은 제외됨)
    cout << '\n';

    system("pause");
    return 0;
}