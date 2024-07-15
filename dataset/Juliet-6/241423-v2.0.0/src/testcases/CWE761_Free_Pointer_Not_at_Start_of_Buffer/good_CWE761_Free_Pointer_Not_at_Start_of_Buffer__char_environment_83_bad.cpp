namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
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
void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    NAMESPACE0_FUN0 VAR3(data);
}
} 
