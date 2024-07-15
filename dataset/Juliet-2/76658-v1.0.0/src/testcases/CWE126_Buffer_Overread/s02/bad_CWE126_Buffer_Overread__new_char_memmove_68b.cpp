char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    VAR0 = data;
    FUN0();
}
} 
extern char * VAR0;
extern char * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    char * data = VAR0;
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
