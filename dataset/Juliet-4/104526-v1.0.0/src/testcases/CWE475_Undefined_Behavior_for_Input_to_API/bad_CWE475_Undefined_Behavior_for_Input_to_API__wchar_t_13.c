void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
