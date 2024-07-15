namespace NAMESPACE0
{
void FUN0(void * &data)
{
    data = (void *)CHAR_STRING;
}
void FUN1(void * &data)
{
    data = (void *)WIDE_STRING;
}
} 
namespace NAMESPACE0
{
void FUN0(void * &data);
void FUN3()
{
    void * data;
    data = NULL;
    FUN0(data);
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        memcpy(dest, data, (dataLen+1));
        printLine((char *)dest);
        free(dest);
    }
}
void FUN1(void * &data);
void FUN5()
{
    void * data;
    data = NULL;
    FUN1(data);
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        memcpy(dest, data, (dataLen+1)*sizeof(wchar_t));
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
} 
