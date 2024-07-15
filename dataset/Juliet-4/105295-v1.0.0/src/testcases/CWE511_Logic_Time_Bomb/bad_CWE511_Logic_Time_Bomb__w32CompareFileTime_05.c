static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
<START>
                UNLINK("important_file.txt");
<END>
            }
        }
    }
}
