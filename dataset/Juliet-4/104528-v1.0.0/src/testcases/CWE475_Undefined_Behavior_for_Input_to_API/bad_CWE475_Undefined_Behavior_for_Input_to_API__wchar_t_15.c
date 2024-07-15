void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        wcscpy(data, L"abcdefghijklmnopqrstuvwxyz");
<START>
        memcpy(data + 6, data + 4, 10*sizeof(wchar_t));
<END>
        printWLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
