namespace NAMESPACE0
{
void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
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
