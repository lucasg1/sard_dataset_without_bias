void FUN0()
{
    goto sink;
sink:
    {
        wchar_t data[150], dest[100];
        wmemset(data, L'A', 149);
        data[149] = L'\0';
        memcpy(dest, data, 99*sizeof(wchar_t));
        dest[99] = L'\0'; 
        printWLine(dest);
    }
}
