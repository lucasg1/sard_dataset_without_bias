namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
} 
