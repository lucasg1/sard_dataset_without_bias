namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(char * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
} 
