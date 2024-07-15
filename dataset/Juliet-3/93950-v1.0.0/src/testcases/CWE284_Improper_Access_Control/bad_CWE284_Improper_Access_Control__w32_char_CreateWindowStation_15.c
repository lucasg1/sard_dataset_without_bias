void FUN0()
{
    switch(6)
    {
    case 6:
    {
        HWINSTA hWinStation;
        char * wStationName = "WindowsStationExample";
<START>
        hWinStation = CreateWindowStationA(
<END>
                          wStationName,
                          0,
                          GENERIC_ALL,
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
