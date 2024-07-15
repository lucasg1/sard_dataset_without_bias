static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(void * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
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
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(void * data)
{
    if(VAR1)
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
}
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
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(void * data)
{
    if(VAR2)
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
}
void FUN5()
{
    void * data;
    data = NULL;
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        if (VAR3 == NULL) {exit(-1);}
        memset(VAR3, 'A', 50-1);
        VAR3[50-1] = '\0';
        data = (void *)VAR3;
    }
    VAR2 = 1; 
    FUN4(data);
}
