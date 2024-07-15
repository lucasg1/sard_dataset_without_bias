void FUN34587(void * data);
void FUN3458(void * data)
{
    FUN34587(data);
}
void FUN3459(void * data);
void FUN340(void * data)
{
    FUN3459(data);
}
void FUN341(void * data);
void FUN342()
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
    FUN341(data);
}
void FUN343(void * data);
void FUN344()
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
    FUN343(data);
}
void FUN3458(void * data);
void FUN34596(void * data)
{
    FUN3458(data);
}
void FUN340(void * data);
void FUN34598(void * data)
{
    FUN340(data);
}
void FUN34596(void * data);
void FUN341(void * data)
{
    FUN34596(data);
}
void FUN34598(void * data);
void FUN343(void * data)
{
    FUN34598(data);
}
void FUN34587(void * data);
void FUN3458(void * data)
{
    FUN34587(data);
}
void FUN3459(void * data);
void FUN340(void * data)
{
    FUN3459(data);
}
void FUN341(void * data);
void FUN342()
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
    FUN341(data);
}
void FUN343(void * data);
void FUN344()
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
    FUN343(data);
}
void FUN3458(void * data);
void FUN34596(void * data)
{
    FUN3458(data);
}
void FUN340(void * data);
void FUN34598(void * data)
{
    FUN340(data);
}
void FUN34596(void * data);
void FUN341(void * data)
{
    FUN34596(data);
}
void FUN34598(void * data);
void FUN343(void * data)
{
    FUN34598(data);
}
void FUN34587(void * data)
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
void FUN3459(void * data)
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
