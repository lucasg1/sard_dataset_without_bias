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
void FUN0()
{
    char * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    data = new char[50];
    data[0] = '\0'; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncat(data, source, 100);
<END>
        printLine(data);
        delete [] data;
    }
}
}
