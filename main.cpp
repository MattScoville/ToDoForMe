#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"

HINSTANCE hInst;

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch (LOWORD(wParam))
        {
        case IDC_OK:
            {
                switch(HIWORD(wParam))
                {
                    case BN_CLICKED:
                    {
                    MessageBox(0, "OK clicked!", "", MB_OK);
                    break;
                    }
                }
            break;
            }
        case IDC_CLOSE:
            {
                switch(HIWORD(wParam))
                {
                case BN_CLICKED:
                    {
                    MessageBox(0, "Close clicked!", "", MB_OK);
                    break;
                    }

                }
            break;
            }
        }
    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
