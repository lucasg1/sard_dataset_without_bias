void FUN0()
{
    if(5==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            swscanf(SRC, L"%99s\0", data);
<END>
        }
    }
}
