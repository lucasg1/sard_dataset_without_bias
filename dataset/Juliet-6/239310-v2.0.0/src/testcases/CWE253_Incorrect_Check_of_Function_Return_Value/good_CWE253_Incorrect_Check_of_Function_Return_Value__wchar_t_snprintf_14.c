void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}
void FUN1()
{
    if(globalFive==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}
