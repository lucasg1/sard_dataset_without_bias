void FUN0()
{
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        wscanf(L"%99s\0", data);
<END>
    }
}
