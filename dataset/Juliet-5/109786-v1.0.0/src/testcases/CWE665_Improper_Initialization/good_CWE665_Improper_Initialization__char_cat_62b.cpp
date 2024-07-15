namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data[0] = '\0'; 
}
} 
