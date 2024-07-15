void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
{
    if(5==5)
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
}
