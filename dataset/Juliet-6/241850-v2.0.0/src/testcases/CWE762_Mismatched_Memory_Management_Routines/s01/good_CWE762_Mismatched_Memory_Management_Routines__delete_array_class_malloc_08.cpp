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
    TwoIntsClass * data;
    data = NULL;
    if(FUN0())
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
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
    TwoIntsClass * data;
    data = NULL;
    if(FUN0())
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN4()
{
    TwoIntsClass * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(FUN0())
    {
        delete [] data;
    }
}
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    if(FUN0())
    {
        data = new TwoIntsClass[100];
    }
    if(FUN0())
    {
        delete [] data;
    }
}
} 
