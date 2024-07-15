void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        HDESK hDesk;
        wchar_t * desktopName = L"DesktopExample";
        hDesk = CreateDesktopW(
                    desktopName,
                    NULL,
                    NULL,
                    0,
                    GENERIC_READ,
                    NULL);
        if (hDesk == NULL)
        {
            printLine("Desktop could not be created");
        }
        else
        {
            printLine("Desktop created successfully");
            CloseDesktop(hDesk);
        }
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        HDESK hDesk;
        wchar_t * desktopName = L"DesktopExample";
        hDesk = CreateDesktopW(
                    desktopName,
                    NULL,
                    NULL,
                    0,
                    GENERIC_READ,
                    NULL);
        if (hDesk == NULL)
        {
            printLine("Desktop could not be created");
        }
        else
        {
            printLine("Desktop created successfully");
            CloseDesktop(hDesk);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
