void FUN0()
{
    if(globalFive==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
<START>
            fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin);
<END>
        }
    }
}
