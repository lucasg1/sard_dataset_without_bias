void FUN187(void * data);
void FUN18()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN187(data);
}
void FUN19(void * data);
void FUN240()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN19(data);
}
void FUN241(void * data);
void FUN187(void * data)
{
    FUN241(data);
}
void FUN243(void * data);
void FUN19(void * data)
{
    FUN243(data);
}
void FUN25(void * data);
void FUN241(void * data)
{
    FUN25(data);
}
void FUN197(void * data);
void FUN243(void * data)
{
    FUN197(data);
}
void FUN199(void * data);
void FUN25(void * data)
{
    FUN199(data);
}
void FUN2401(void * data);
void FUN197(void * data)
{
    FUN2401(data);
}
void FUN187(void * data);
void FUN18()
{
    void * data;
    data = NULL;
    data = (void *)CHAR_STRING;
    FUN187(data);
}
void FUN19(void * data);
void FUN240()
{
    void * data;
    data = NULL;
    data = (void *)WIDE_STRING;
    FUN19(data);
}
void FUN241(void * data);
void FUN187(void * data)
{
    FUN241(data);
}
void FUN243(void * data);
void FUN19(void * data)
{
    FUN243(data);
}
void FUN25(void * data);
void FUN241(void * data)
{
    FUN25(data);
}
void FUN197(void * data);
void FUN243(void * data)
{
    FUN197(data);
}
void FUN199(void * data);
void FUN25(void * data)
{
    FUN199(data);
}
void FUN2401(void * data);
void FUN197(void * data)
{
    FUN2401(data);
}
void FUN199(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * 1);
        (void)strcpy(dest, data);
        printLine((char *)dest);
    }
}
void FUN2401(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
    }
}
