void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            wcscpy(data, L"abcdefghijklmnopqrstuvwxyz");
            memmove(data + 6, data + 4, 10*sizeof(wchar_t));
            printWLine(data);
        }
    }
}
