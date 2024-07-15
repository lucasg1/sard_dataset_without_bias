void * VAR0;
void * VAR1;
void * VAR2;
void FUN2();
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = data;
    FUN2();
}
void * VAR0;
void * VAR1;
void * VAR2;
void FUN2();
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = data;
    FUN2();
}
extern void * VAR0;
extern void * VAR1;
extern void * VAR2;
void FUN2()
{
    void * data = VAR0;
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printLine((char *)dest);
    }
}
