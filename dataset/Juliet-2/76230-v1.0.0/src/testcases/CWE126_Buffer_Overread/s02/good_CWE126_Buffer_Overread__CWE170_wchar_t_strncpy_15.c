void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t data[150], dest[100];
        wmemset(data, L'A', 149);
        data[149] = L'\0';
        wcsncpy(dest, data, 99);
        dest[99] = L'\0'; 
        printWLine(dest);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        wchar_t data[150], dest[100];
        wmemset(data, L'A', 149);
        data[149] = L'\0';
        wcsncpy(dest, data, 99);
        dest[99] = L'\0'; 
        printWLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
