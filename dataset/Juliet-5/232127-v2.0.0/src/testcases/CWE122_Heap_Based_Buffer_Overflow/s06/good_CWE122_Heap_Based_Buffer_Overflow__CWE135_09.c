void FUN0()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (dataBadBuffer == NULL) {exit(-1);}
            wmemset(dataBadBuffer, L'A', 50-1);
            dataBadBuffer[50-1] = L'\0';
            data = (void *)dataBadBuffer;
        }
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        {
            wchar_t * dataBadBuffer = (wchar_t *)malloc(50*sizeof(wchar_t));
            if (dataBadBuffer == NULL) {exit(-1);}
            wmemset(dataBadBuffer, L'A', 50-1);
            dataBadBuffer[50-1] = L'\0';
            data = (void *)dataBadBuffer;
        }
    }
    if(GLOBAL_CONST_TRUE)
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
void FUN2()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * VAR0 = (char *)malloc(50*sizeof(char));
            if (VAR0 == NULL) {exit(-1);}
            memset(VAR0, 'A', 50-1);
            VAR0[50-1] = '\0';
            data = (void *)VAR0;
        }
    }
    if(GLOBAL_CONST_TRUE)
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
void FUN3()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * VAR0 = (char *)malloc(50*sizeof(char));
            if (VAR0 == NULL) {exit(-1);}
            memset(VAR0, 'A', 50-1);
            VAR0[50-1] = '\0';
            data = (void *)VAR0;
        }
    }
    if(GLOBAL_CONST_TRUE)
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
