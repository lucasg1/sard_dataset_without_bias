namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
