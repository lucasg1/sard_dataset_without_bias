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
            if (swscanf(SRC, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
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
            if (swscanf(SRC, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
            }
        }
    }
}
