void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (wscanf(L"%99s\0", data) == EOF)
            {
                printLine("wscanf failed!");
            }
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (wscanf(L"%99s\0", data) == EOF)
            {
                printLine("wscanf failed!");
            }
        }
    }
}
