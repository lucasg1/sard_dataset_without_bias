static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
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
