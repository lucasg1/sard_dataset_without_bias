static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_READ,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            HWINSTA hWinStation;
            wchar_t * wStationName = L"WindowsStationExample";
            hWinStation = CreateWindowStationW(
                              wStationName,
                              0,
                              GENERIC_READ,
                              NULL);
            if (hWinStation == NULL)
            {
                printLine("Windows station could not be created");
            }
            else
            {
                printLine("Windows Station created successfully");
                CloseWindowStation(hWinStation);
            }
        }
    }
}
