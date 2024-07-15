static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
} 
