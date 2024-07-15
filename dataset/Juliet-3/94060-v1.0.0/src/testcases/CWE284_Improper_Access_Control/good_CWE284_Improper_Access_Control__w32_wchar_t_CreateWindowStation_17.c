void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
