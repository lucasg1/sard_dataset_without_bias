void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HDESK hDesk;
            char * desktopName = "DesktopExample";
<START>
            hDesk = CreateDesktopA(
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
    }
}
