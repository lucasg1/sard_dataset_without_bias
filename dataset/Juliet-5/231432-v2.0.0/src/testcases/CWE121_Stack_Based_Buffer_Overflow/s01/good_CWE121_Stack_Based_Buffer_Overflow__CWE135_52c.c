void FUN9(void * data);
void FUN10()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN9(data);
}
void FUN11(void * data);
void FUN12()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN11(data);
}
void FUN13(void * data);
void FUN9(void * data)
{
    FUN13(data);
}
void FUN15(void * data);
void FUN11(void * data)
{
    FUN15(data);
}
void FUN9(void * data);
void FUN10()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN9(data);
}
void FUN11(void * data);
void FUN12()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN11(data);
}
void FUN13(void * data);
void FUN9(void * data)
{
    FUN13(data);
}
void FUN15(void * data);
void FUN11(void * data)
{
    FUN15(data);
}
void FUN13(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN15(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
