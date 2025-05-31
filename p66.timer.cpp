#include <windows.h>
#include <string>

int secondsLeft = 30;
HWND hLabel;

void UpdateLabel(HWND hwnd)
{
    std::string text = "Time left: " + std::to_string(secondsLeft) + "s";
    SetWindowText(hLabel, text.c_str());
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_CREATE:
        hLabel = CreateWindow("STATIC", "", WS_VISIBLE | WS_CHILD,
                              50, 50, 200, 50, hwnd, NULL, NULL, NULL);
        SetTimer(hwnd, 1, 1000, NULL); // 1 second
        break;

    case WM_TIMER:
        if (secondsLeft > 0)
        {
            secondsLeft--;
            UpdateLabel(hwnd);
        }
        else
        {
            KillTimer(hwnd, 1);
            MessageBox(hwnd, "Time's up!", "Countdown Timer", MB_OK);
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

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
    const char CLASS_NAME[] = "CountdownClass";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, "Countdown Timer", WS_OVERLAPPEDWINDOW,
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
