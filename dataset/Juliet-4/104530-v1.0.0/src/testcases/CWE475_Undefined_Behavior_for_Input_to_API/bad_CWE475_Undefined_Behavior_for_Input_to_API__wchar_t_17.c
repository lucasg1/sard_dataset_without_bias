void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            wcscpy(data, L"abcdefghijklmnopqrstuvwxyz");
<START>
            memcpy(data + 6, data + 4, 10*sizeof(wchar_t));
<END>
            printWLine(data);
        }
    }
}
