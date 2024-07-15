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
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) < 0)
            {
                printLine("snprintf failed!");
            }
        }
    }
}
void FUN3()
{
    if(FUN0())
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
