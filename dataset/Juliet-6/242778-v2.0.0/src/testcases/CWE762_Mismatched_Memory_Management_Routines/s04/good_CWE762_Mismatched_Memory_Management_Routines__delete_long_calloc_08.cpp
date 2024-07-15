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
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN4()
{
    long * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
    }
    if(FUN0())
    {
        delete data;
    }
}
void FUN5()
{
    long * data;
    data = NULL;
    if(FUN0())
    {
        data = new long;
    }
    if(FUN0())
    {
        delete data;
    }
}
} 
