namespace NAMESPACE0
{
void FUN0()
{
    char * data;
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
    NAMESPACE0_FUN0(char * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    data = (char *)malloc(50*sizeof(char));
    data[0] = '\0'; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        data[100-1] = '\0'; 
        printLine(data);
        free(data);
    }
}
}
