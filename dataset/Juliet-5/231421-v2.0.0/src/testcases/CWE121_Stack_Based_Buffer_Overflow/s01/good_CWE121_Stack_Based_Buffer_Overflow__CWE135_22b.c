int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN7(void * data);
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = 0; 
    FUN7(data);
}
void FUN9(void * data);
void FUN10()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR1 = 1; 
    FUN9(data);
}
void FUN11(void * data);
void FUN12()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR2 = 1; 
    FUN11(data);
}
int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN7(void * data);
void FUN8()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = 0; 
    FUN7(data);
}
void FUN9(void * data);
void FUN10()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR1 = 1; 
    FUN9(data);
}
void FUN11(void * data);
void FUN12()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    VAR2 = 1; 
    FUN11(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN7(void * data)
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
void FUN9(void * data)
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
void FUN11(void * data)
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
