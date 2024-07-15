void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            if (wscanf(L"%99s\0", data) == 0)
<END>
            {
                printLine("wscanf failed!");
            }
        }
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
