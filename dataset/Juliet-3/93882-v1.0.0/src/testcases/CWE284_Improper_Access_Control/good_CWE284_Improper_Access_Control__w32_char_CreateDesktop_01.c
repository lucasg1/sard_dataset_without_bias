void FUN0()
{
    {
        HDESK hDesk;
        char * desktopName = "DesktopExample";
        hDesk = CreateDesktopA(
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
