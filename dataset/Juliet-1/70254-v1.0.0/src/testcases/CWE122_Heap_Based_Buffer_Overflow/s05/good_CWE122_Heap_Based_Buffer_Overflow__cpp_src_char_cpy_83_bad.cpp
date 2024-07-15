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
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = new char[100];
    NAMESPACE0_FUN0 VAR3(data);
}
} 
