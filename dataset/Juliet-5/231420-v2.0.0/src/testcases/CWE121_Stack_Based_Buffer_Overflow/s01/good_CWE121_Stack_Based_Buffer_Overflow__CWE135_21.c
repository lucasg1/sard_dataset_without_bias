static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(void * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
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
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(void * data)
{
    if(VAR1)
    {
        {
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(void * data)
{
    if(VAR2)
    {
        {
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}
void FUN5()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR2 = 1; 
    FUN4(data);
}
