static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        delete data;
    }
    if(staticFive==5)
    {
        ; 
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
        data = new TwoIntsClass;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
} 
