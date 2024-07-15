void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t src[150], dest[100];
        int i;
        wmemset(src, L'A', 149);
        src[149] = L'\0';
        for(i=0; i < 99; i++)
        {
            dest[i] = src[i];
        }
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
        wchar_t src[150], dest[100];
        int i;
        wmemset(src, L'A', 149);
        src[149] = L'\0';
        for(i=0; i < 99; i++)
        {
            dest[i] = src[i];
        }
        dest[99] = L'\0'; 
        printWLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
