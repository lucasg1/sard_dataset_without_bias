namespace NAMESPACE0
{
char * FUN0(char * data)
{
    data = new char[50];
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
    data = NULL;
    data = FUN0(data);
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 
