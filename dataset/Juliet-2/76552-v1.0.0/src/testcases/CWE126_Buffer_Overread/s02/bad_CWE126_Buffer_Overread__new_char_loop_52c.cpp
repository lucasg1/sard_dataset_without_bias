namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 
