namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int64_t * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int64_t * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t * dataCopy)
{
    data = dataCopy;
    data = (int64_t *)malloc(50*sizeof(int64_t));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
}
