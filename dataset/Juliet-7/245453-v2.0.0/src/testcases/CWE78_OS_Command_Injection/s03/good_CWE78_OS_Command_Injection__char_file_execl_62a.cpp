namespace NAMESPACE0
{
void FUN0(char * &data)
{
    strcat(data, "*.*");
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    char dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    FUN0(data);
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
} 
