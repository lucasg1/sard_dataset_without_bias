void FUN0()
{
    switch(6)
    {
    case 6:
    {
        HDESK hDesk;
        wchar_t * desktopName = L"DesktopExample";
<START>
        hDesk = CreateDesktopW(
<END>
                    desktopName,
                    NULL,
                    NULL,
                    0,
                    GENERIC_ALL,
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
