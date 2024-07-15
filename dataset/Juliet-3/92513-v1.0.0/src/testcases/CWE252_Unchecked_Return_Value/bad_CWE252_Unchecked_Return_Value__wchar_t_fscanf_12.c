void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            fwscanf(stdin, L"%99s\0", data);
<END>
        }
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (fwscanf(stdin, L"%99s\0", data) == EOF)
            {
                printLine("fwscanf failed!");
            }
        }
    }
}
