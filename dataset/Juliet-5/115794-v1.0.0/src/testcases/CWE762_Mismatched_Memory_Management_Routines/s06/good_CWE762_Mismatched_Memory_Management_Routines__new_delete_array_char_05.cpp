static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char;
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
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char;
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
} 
