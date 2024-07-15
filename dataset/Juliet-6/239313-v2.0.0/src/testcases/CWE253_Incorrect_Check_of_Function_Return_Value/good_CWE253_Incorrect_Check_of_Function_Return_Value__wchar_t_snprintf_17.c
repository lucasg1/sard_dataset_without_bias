void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
