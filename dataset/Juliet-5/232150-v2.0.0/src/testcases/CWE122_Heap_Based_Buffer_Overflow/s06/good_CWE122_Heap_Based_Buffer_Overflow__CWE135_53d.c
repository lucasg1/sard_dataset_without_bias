void FUN0(void * data);
void FUN1()
{
    void * data;
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    FUN0(data);
}
void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    FUN2(data);
}
void FUN0(void * data);
void FUN1()
{
    void * data;
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    FUN0(data);
}
void FUN2(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    FUN2(data);
}
void FUN10(void * data);
void FUN11(void * data)
{
    FUN10(data);
}
void FUN12(void * data);
void FUN13(void * data)
{
    FUN12(data);
}
void FUN10(void * data);
void FUN11(void * data)
{
    FUN10(data);
}
void FUN12(void * data);
void FUN13(void * data)
{
    FUN12(data);
}
void FUN11(void * data);
void FUN0(void * data)
{
    FUN11(data);
}
void FUN13(void * data);
void FUN2(void * data)
{
    FUN13(data);
}
void FUN11(void * data);
void FUN0(void * data)
{
    FUN11(data);
}
void FUN13(void * data);
void FUN2(void * data)
{
    FUN13(data);
}
void FUN10(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}
void FUN12(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
