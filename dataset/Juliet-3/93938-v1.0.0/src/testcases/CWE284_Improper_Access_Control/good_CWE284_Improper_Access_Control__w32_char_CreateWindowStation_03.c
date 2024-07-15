void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            hWinStation = CreateWindowStationA(
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
    if(5==5)
    {
        {
            HWINSTA hWinStation;
            char * wStationName = "WindowsStationExample";
            hWinStation = CreateWindowStationA(
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
