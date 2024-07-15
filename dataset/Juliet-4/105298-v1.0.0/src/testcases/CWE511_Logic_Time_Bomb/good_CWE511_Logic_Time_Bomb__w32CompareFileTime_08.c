static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN3()
{
    if(FUN0())
    {
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
    }
}
