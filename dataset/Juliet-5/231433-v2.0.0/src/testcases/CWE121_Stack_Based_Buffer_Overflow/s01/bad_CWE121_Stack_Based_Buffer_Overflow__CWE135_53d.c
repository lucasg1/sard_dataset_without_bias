void FUN4(void * data);
void FUN7(void * data)
{
    FUN4(data);
}
void FUN7(void * data);
void FUN7(void * data)
{
    FUN7(data);
}
void FUN4(void * data);
void FUN7(void * data)
{
    FUN4(data);
}
void FUN7(void * data);
void FUN7()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN7(data);
}
void FUN7(void * data);
void FUN7(void * data)
{
    FUN7(data);
}
void FUN7(void * data);
void FUN7()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN7(data);
}
void FUN4(void * data)
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
