int VAR0 = 0;
void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = 1; 
    FUN2(data);
}
int VAR0 = 0;
void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    VAR0 = 1; 
    FUN2(data);
}
extern int VAR0;
void FUN2(void * data)
{
    if(VAR0)
    {
        {
<START>
            size_t dataLen = strlen((char *)data);
<END>
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
    }
}
