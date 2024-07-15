static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
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
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
        delete data;
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
} 
