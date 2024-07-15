void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t data[150], dest[100];
        wmemset(data, L'A', 149);
        data[149] = L'\0';
        wcsncpy(dest, data, 99);
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
