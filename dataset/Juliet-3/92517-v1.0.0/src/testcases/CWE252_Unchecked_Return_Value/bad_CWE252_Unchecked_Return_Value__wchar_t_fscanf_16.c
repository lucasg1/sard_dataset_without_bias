void FUN0()
{
    while(1)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            fwscanf(stdin, L"%99s\0", data);
<END>
        }
        break;
    }
}
