void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            fwscanf(stdin, L"%99s\0", data);
<END>
        }
    }
}
