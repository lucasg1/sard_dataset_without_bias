static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
void FUN1()
{
    if(STATIC_CONST_TRUE)
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
