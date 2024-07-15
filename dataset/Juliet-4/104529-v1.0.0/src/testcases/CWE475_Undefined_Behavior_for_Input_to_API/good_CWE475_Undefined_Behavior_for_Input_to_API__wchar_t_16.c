void FUN0()
{
    while(1)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            wcscpy(data, L"abcdefghijklmnopqrstuvwxyz");
            memmove(data + 6, data + 4, 10*sizeof(wchar_t));
            printWLine(data);
        }
        break;
    }
}
