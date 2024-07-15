char * VAR0;
char * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = (char *)ALLOCA(sizeof(char));
        *dataBuffer = 'A';
        data = dataBuffer;
    }
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
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
