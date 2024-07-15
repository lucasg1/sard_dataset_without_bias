void FUN0()
{
    int i,k;
    void * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (void *)WIDE_STRING;
    }
    for(k = 0; k < 1; k++)
    {
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
void FUN1()
{
    int h,j;
    void * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (void *)CHAR_STRING;
    }
    for(j = 0; j < 1; j++)
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
