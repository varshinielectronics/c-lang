#include <windows.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

// Timer constants
#define ID_TIMER 1
#define ID_START 2
#define ID_STOP 3
#define ID_RESET 4

int seconds = 0;
bool running = false;
HWND hTimeLabel;

void UpdateTimeDisplay()
{
    int hrs = seconds / 3600;
    int mins = (seconds % 3600) / 60;
    int secs = seconds % 60;

    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << hrs << ":"
        << std::setfill('0') << std::setw(2) << mins << ":"
        << std::setfill('0') << std::setw(2) << secs;

    SetWindowText(hTimeLabel, oss.str().c_str());
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    const char CLASS_NAME[] = "StopwatchClass";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, "Windows API Stopwatch",
        WS_OVERLAPPEDWINDOW ^ WS_THICKFRAME ^ WS_MAXIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT, 300, 200,
        NULL, NULL, hInstance, NULL);

    if (!hwnd)
        return 0;

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static HWND hStart, hStop, hReset;

    switch (uMsg)
    {
    case WM_CREATE:
        hTimeLabel = CreateWindow("STATIC", "00:00:00", WS_CHILD | WS_VISIBLE | SS_CENTER,
                                  50, 20, 180, 30, hwnd, NULL, NULL, NULL);

        hStart = CreateWindow("BUTTON", "Start", WS_CHILD | WS_VISIBLE,
                              20, 70, 70, 30, hwnd, (HMENU)ID_START, NULL, NULL);

        hStop = CreateWindow("BUTTON", "Stop", WS_CHILD | WS_VISIBLE,
                             105, 70, 70, 30, hwnd, (HMENU)ID_STOP, NULL, NULL);

        hReset = CreateWindow("BUTTON", "Reset", WS_CHILD | WS_VISIBLE,
                              190, 70, 70, 30, hwnd, (HMENU)ID_RESET, NULL, NULL);

        break;

    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        case ID_START:
            if (!running)
            {
                SetTimer(hwnd, ID_TIMER, 1000, NULL);
                running = true;
            }
            break;
        case ID_STOP:
            KillTimer(hwnd, ID_TIMER);
            running = false;
            break;
        case ID_RESET:
            KillTimer(hwnd, ID_TIMER);
            seconds = 0;
            running = false;
            UpdateTimeDisplay();
            break;
        }
        break;

    case WM_TIMER:
        if (wParam == ID_TIMER && running)
        {
            seconds++;
            UpdateTimeDisplay();
        }
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}
