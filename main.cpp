#include <windows.h>
#include <mmsystem.h>
#include <iostream>

int main()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    while (true) {
        Sleep(20);
        if (GetAsyncKeyState(VK_LWIN)) {
            if (GetAsyncKeyState(VK_LCONTROL)) {
                PlaySoundW((LPCWSTR)"SystemExclamation", NULL, SND_SYNC);
                system("ipconfig /flushdns && ipconfig /renew");
                PlaySoundW(TEXT("C:\\Users\\tsuuuuki\\source\\repos\\fixdnsmap\\fixdnsmap\\notif.wav"), NULL, SND_SYNC);
            }
        }
    }
}
