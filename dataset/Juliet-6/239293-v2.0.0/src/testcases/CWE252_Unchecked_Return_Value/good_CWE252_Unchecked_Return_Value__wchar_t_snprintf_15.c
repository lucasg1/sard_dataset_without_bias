void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
        {
            printLine("snwprintf failed!");
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
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        if (SNPRINTF(data,100-wcslen(SRC)-1, L"%s\n", SRC) < 0)
        {
            printLine("snwprintf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
