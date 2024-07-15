void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        SYSTEMTIME setTime, currentTime;
        FILETIME setTimeAsFileTime, currentTimeAsFileTime;
        setTime.wYear         = 2008; 
        setTime.wMonth        = 1;    
        setTime.wDayOfWeek    = 0;    
        setTime.wDay          = 1;    
        setTime.wHour         = 12;   
        setTime.wMinute       = 0;    
        setTime.wSecond       = 0;    
        setTime.wMilliseconds = 0;    
        GetSystemTime(&currentTime);
        SystemTimeToFileTime(&currentTime, &currentTimeAsFileTime);
        SystemTimeToFileTime(&setTime, &setTimeAsFileTime);
        if (CompareFileTime(&currentTimeAsFileTime, &setTimeAsFileTime) == 1)
        {
            printLine("Happy New Year!");
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
        SYSTEMTIME setTime, currentTime;
        FILETIME setTimeAsFileTime, currentTimeAsFileTime;
        setTime.wYear         = 2008; 
        setTime.wMonth        = 1;    
        setTime.wDayOfWeek    = 0;    
        setTime.wDay          = 1;    
        setTime.wHour         = 12;   
        setTime.wMinute       = 0;    
        setTime.wSecond       = 0;    
        setTime.wMilliseconds = 0;    
        GetSystemTime(&currentTime);
        SystemTimeToFileTime(&currentTime, &currentTimeAsFileTime);
        SystemTimeToFileTime(&setTime, &setTimeAsFileTime);
        if (CompareFileTime(&currentTimeAsFileTime, &setTimeAsFileTime) == 1)
        {
            printLine("Happy New Year!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
