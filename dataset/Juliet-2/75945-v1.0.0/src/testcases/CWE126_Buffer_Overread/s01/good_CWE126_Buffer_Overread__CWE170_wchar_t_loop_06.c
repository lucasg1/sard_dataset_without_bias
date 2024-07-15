static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
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
    }
}
