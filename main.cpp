#include <iostream>
#include <string>

using namespace std;

void ranking(){
    int punktacja, frekwencja;
    float srednia_ocen;

    cout << "Podaj liczbe punktow zdobytych przez ucznia: ";
    cin >> punktacja;

    cout << "Podaj frekwencje ucznia: ";
    cin >> frekwencja;

    cout << "Podaj srednia ucznia: ";
    cin >> srednia_ocen;

    if (frekwencja >= 94 && srednia_ocen >= 4.5){
        punktacja += 25;
        cout << "Otrzymales dodatkowe 25 punktow. Twoja suma punktow wynosi:" << punktacja;
    } else {
        cout << "Niestety nie otrzymales bonusowych punktow, oto twoja punktacia: "<< punktacja;
    }
}

int main()
{
    ranking();
    return 0;
}
