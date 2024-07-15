void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t data[150], dest[100];
        wmemset(data, L'A', 149);
        data[149] = L'\0';
        memcpy(dest, data, 99*sizeof(wchar_t));
<START>
        printWLine(dest);
<END>
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
