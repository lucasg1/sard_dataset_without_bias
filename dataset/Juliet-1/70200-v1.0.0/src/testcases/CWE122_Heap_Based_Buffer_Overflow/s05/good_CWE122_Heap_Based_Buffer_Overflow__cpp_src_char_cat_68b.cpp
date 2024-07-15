char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    data = new char[100];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
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
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
        delete [] data;
    }
}
} 
