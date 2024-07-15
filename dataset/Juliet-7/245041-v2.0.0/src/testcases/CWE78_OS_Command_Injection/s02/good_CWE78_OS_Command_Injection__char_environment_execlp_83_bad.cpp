namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    NAMESPACE0_FUN0 VAR1(data);
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
    strcat(data, "*.*");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
}
