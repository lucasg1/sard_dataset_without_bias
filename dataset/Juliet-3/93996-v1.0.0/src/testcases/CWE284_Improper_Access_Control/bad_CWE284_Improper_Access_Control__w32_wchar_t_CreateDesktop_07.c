static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
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
    }
}
