char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[10+1];
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
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
        delete [] data;
    }
}
} 
