namespace NAMESPACE0
{
void FUN0(void * &data)
{
    data = (void *)WIDE_STRING;
}
} 
namespace NAMESPACE0
{
void FUN0(void * &data);
void FUN2()
{
    void * data;
    data = NULL;
    FUN0(data);
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)calloc(dataLen+1, 1);
        memcpy(dest, data, (dataLen+1));
        printLine((char *)dest);
        free(dest);
    }
}
} 
