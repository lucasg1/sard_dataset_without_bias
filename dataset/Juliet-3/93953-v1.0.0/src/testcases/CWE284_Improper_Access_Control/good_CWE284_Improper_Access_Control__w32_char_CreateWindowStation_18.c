void FUN0()
{
    goto sink;
sink:
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
