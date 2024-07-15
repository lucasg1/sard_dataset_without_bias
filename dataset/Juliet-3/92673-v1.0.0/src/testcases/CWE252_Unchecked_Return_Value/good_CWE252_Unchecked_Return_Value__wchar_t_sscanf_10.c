void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
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
