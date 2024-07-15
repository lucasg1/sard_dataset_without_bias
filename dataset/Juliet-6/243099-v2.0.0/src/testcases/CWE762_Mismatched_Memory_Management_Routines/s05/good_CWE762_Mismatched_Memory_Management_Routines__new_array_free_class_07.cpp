static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass[100];
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass[100];
    }
    if(staticFive==5)
    {
        delete [] data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
} 
