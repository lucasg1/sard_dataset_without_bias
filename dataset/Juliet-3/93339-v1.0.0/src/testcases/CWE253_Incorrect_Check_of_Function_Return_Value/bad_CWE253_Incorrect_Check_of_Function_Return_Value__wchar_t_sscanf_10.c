void FUN0()
{
    if(globalTrue)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            if (swscanf(SRC_STRING, L"%99s\0", data) == 0)
<END>
            {
                printLine("swscanf failed!");
            }
        }
    }
}
