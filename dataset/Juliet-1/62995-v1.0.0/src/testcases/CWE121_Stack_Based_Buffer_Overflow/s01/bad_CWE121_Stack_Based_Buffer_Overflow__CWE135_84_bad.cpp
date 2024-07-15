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
void FUN0()
{
    void * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(void * dataCopy)
{
    data = dataCopy;
    data = (void *)WIDE_STRING;
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
