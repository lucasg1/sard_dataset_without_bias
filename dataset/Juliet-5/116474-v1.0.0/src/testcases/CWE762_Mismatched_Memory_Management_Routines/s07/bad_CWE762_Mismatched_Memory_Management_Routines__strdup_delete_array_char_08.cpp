static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    char * data;
    data = NULL;
    if(FUN0())
    {
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
    }
    if(FUN0())
    {
<START>
        delete [] data;
<END>
    }
}
} 
