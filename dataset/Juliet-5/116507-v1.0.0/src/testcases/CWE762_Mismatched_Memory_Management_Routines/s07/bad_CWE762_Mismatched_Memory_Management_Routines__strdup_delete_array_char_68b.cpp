namespace NAMESPACE0
{
char * VAR1;
char * VAR2;
char * VAR3;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern char * VAR1;
extern char * VAR2;
extern char * VAR3;
void FUN0()
{
    char * data = VAR1;
<START>
    delete [] data;
<END>
}
} 
