void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            if (fwscanf(stdin, L"%99s\0", data) == 0)
<END>
            {
                printLine("fwscanf failed!");
            }
        }
    }
}
