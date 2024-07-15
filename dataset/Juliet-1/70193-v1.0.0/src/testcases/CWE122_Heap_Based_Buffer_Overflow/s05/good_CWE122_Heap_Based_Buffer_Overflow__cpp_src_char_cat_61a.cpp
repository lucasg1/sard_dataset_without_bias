namespace NAMESPACE0
{
char * FUN0(char * data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    return data;
}
} 
namespace NAMESPACE0
{
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = new char[100];
    data = FUN0(data);
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
