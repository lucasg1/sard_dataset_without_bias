namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        char dest[50] = "";
<START>
        strcpy(dest, data);
<END>
        printLine(data);
        delete [] data;
    }
}
} 
