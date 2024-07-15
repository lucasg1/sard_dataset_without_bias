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
    data = (int64_t *)malloc(100*sizeof(int64_t));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR3 =  new NAMESPACE0_FUN0(data);
    delete VAR3;
}
} 
