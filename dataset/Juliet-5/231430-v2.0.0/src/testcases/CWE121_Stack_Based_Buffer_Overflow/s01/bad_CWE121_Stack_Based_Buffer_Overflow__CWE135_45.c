void * VAR0;
void * VAR1;
void * VAR2;
void FUN0()
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
void FUN1()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = data;
    FUN0();
}
