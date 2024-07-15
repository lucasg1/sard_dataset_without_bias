namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[50];
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
<START>
        strcpy(data, source);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
