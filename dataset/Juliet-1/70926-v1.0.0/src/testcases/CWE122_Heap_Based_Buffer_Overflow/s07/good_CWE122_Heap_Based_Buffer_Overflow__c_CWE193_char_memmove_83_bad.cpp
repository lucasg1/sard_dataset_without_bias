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
    data = (char *)malloc((10+1)*sizeof(char));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        char source[10+1] = SRC_STRING;
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR3(data);
}
} 
