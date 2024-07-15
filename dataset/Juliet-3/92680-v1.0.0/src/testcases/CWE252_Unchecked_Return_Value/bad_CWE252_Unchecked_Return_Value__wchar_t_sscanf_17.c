void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
