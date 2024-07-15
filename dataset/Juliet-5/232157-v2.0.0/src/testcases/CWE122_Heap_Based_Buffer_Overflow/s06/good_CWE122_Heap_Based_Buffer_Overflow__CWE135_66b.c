void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(void * dataArray[]);
void FUN3()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(void * dataArray[]);
void FUN1()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        char * VAR0 = (char *)malloc(50*sizeof(char));
        if (VAR0 == NULL) {exit(-1);}
        memset(VAR0, 'A', 50-1);
        VAR0[50-1] = '\0';
        data = (void *)VAR0;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(void * dataArray[]);
void FUN3()
{
    void * data;
    void * dataArray[5];
    data = NULL;
    {
        wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (dataBadBuffer == NULL) {exit(-1);}
        wmemset(dataBadBuffer, L'A', 50-1);
        dataBadBuffer[50-1] = L'\0';
        data = (void *)dataBadBuffer;
    }
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(void * dataArray[])
{
    void * data = dataArray[2];
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}
void FUN2(void * dataArray[])
{
    void * data = dataArray[2];
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
