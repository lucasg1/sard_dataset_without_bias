static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
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
    }
}
