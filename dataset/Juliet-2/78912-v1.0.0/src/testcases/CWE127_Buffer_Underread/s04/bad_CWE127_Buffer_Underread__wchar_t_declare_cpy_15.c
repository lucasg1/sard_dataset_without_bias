void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    switch(6)
    {
    case 6:
        data = dataBuffer - 8;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t dest[100*2];
        wmemset(dest, L'C', 100*2-1); 
        dest[100*2-1] = L'\0'; 
<START>
        wcscpy(dest, data);
<END>
        printWLine(dest);
    }
}
