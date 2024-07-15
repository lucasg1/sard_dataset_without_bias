void FUN0()
{
    goto sink;
sink:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        fwscanf(stdin, L"%99s\0", data);
<END>
    }
}
