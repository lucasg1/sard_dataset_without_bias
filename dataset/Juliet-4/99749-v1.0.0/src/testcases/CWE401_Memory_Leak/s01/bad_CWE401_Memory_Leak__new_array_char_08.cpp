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
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(FUN0())
    {
<START>
<END>
        ; 
    }
}
} 
