void FUN4(void * data);
void FUN5()
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
    FUN4(data);
}
void FUN4(void * data);
void FUN5()
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
    FUN4(data);
}
void FUN4(void * data);
void FUN5(void * data)
{
    FUN4(data);
}
void FUN4(void * data);
void FUN5(void * data)
{
    FUN4(data);
}
void FUN5(void * data);
void FUN4(void * data)
{
    FUN5(data);
}
void FUN5(void * data);
void FUN4(void * data)
{
    FUN5(data);
}
void FUN4(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
<START>
        (void)wcscpy(dest, data);
<END>
        printLine((char *)dest);
        free(dest);
    }
}
