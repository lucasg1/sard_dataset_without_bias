void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
            {
                printLine("snwprintf failed!");
            }
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
            {
                printLine("snwprintf failed!");
            }
        }
    }
}
