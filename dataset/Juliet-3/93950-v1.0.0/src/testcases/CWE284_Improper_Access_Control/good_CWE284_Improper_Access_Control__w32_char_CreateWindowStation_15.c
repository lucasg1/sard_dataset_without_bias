void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
