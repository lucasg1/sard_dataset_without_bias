int VAR0 = 0;
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
    VAR0 = 1; 
    FUN2(data);
}
int VAR0 = 0;
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
            void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
            if (dest == NULL) {exit(-1);}
            (void)wcscpy(dest, data);
            printLine((char *)dest);
            free(dest);
        }
    }
}
