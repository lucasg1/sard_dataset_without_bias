void FUN0()
{
    goto sink;
sink:
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
}
