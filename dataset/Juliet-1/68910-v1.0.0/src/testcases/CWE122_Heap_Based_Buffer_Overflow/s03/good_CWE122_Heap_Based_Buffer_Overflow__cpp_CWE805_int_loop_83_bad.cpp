namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int * dataCopy)
{
    data = dataCopy;
    data = new int[100];
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
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
