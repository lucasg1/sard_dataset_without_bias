void FUN0()
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
