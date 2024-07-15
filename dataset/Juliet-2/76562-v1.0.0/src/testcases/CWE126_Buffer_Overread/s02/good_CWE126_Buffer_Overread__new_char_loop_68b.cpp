char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    VAR1 = data;
    FUN0();
}
} 
extern char * VAR0;
extern char * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    char * data = VAR1;
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 
