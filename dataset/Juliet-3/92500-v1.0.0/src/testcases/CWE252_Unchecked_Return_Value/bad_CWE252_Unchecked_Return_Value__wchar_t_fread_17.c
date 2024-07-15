void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
