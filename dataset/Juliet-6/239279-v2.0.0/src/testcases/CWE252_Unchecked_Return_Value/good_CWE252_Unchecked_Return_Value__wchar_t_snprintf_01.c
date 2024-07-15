void FUN0()
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
