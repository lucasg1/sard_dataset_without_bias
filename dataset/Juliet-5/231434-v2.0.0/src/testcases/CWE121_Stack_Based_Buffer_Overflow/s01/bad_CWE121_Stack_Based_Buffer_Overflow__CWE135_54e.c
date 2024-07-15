void FUN8(void * data);
void FUN9()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN8(data);
}
void FUN10(void * data);
void FUN8(void * data)
{
    FUN10(data);
}
void FUN12(void * data);
void FUN10(void * data)
{
    FUN12(data);
}
void FUN14(void * data);
void FUN12(void * data)
{
    FUN14(data);
}
void FUN8(void * data);
void FUN9()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN8(data);
}
void FUN10(void * data);
void FUN8(void * data)
{
    FUN10(data);
}
void FUN12(void * data);
void FUN10(void * data)
{
    FUN12(data);
}
void FUN14(void * data);
void FUN12(void * data)
{
    FUN14(data);
}
void FUN14(void * data)
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
