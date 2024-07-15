namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
