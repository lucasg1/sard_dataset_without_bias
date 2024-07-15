void * VAR0;
void * VAR1;
void * VAR2;
void FUN0()
{
    void * data = VAR1;
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    void * data = VAR2;
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR2 = data;
    FUN2();
}
