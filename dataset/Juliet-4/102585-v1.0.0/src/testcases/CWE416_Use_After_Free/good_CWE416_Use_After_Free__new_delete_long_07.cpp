static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
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
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(staticFive==5)
    {
        printLongLine(*data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
    }
    if(staticFive==5)
    {
        printLongLine(*data);
    }
}
} 
