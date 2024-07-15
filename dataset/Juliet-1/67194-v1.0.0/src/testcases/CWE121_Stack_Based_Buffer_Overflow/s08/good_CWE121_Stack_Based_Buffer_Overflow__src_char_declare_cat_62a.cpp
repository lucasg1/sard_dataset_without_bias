namespace NAMESPACE0
{
void FUN0(char * &data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    FUN0(data);
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
} 
