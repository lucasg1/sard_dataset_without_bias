void FUN0()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t data[150], dest[100];
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            wcsncpy(dest, data, 99);
            dest[99] = L'\0'; 
            printWLine(dest);
        }
    }
}
void FUN1()
{
    if(globalFive==5)
    {
        {
            wchar_t data[150], dest[100];
            wmemset(data, L'A', 149);
            data[149] = L'\0';
            wcsncpy(dest, data, 99);
            dest[99] = L'\0'; 
            printWLine(dest);
        }
    }
}
