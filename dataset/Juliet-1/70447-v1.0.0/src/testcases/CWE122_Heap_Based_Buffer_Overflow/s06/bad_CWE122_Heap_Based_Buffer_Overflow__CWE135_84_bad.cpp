namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(void * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    void * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(void * dataCopy)
{
    data = dataCopy;
    {
        wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR4, L'A', 50-1);
        VAR4[50-1] = L'\0';
        data = (void *)VAR4;
    }
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
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
