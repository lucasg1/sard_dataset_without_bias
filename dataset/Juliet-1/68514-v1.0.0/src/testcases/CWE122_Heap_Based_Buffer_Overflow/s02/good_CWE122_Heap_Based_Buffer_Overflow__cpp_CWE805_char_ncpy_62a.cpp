namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
    data[0] = '\0'; 
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    data = NULL;
    FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncpy(data, source, 100-1);
        data[100-1] = '\0'; 
        printLine(data);
        delete [] data;
    }
}
} 
