namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int64_t dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int64_t data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    data = 0LL;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int64_t dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%" SCNd64, &data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
}
