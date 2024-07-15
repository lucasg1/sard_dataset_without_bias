static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticFalse)
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
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}
} 
