#include <iostream>
using namespace std;

int main() {
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;
    char c;

    cout << "������һ���ַ���";
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
        else if (c == ' ') {
            spaceCount++;
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Ӣ����ĸ������" << letterCount << endl;
    cout << "�ո������" << spaceCount << endl;
    cout << "�����ַ�������" << digitCount << endl;
    cout << "�����ַ�������" << otherCount << endl;

    return 0;
}