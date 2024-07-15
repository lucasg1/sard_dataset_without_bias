void * VAR0;
void * VAR1;
void * VAR2;
void FUN5();
void FUN6();
void FUN7()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR1 = data;
    FUN5();
}
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR2 = data;
    FUN6();
}
void * VAR0;
void * VAR1;
void * VAR2;
void FUN5();
void FUN6();
void FUN7()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR1 = data;
    FUN5();
}
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR2 = data;
    FUN6();
}
extern void * VAR0;
extern void * VAR1;
extern void * VAR2;
void FUN5()
{
    void * data = VAR1;
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN6()
{
    void * data = VAR2;
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
