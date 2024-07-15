void FUN8(void * data);
void FUN9(void * data)
{
    FUN8(data);
}
void FUN120(void * data);
void FUN121()
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
    FUN120(data);
}
void FUN9(void * data);
void FUN13(void * data)
{
    FUN9(data);
}
void FUN13(void * data);
void FUN120(void * data)
{
    FUN13(data);
}
void FUN8(void * data);
void FUN9(void * data)
{
    FUN8(data);
}
void FUN120(void * data);
void FUN121()
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
    FUN120(data);
}
void FUN9(void * data);
void FUN13(void * data)
{
    FUN9(data);
}
void FUN13(void * data);
void FUN120(void * data)
{
    FUN13(data);
}
void FUN8(void * data)
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
