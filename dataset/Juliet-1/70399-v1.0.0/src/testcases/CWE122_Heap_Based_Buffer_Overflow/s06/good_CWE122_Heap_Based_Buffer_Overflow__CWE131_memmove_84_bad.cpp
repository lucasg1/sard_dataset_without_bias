namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int * dataCopy)
{
    data = dataCopy;
    data = (int *)malloc(10*sizeof(int));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int source[10] = {0};
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR3 =  new NAMESPACE0_FUN0(data);
    delete VAR3;
}
} 
