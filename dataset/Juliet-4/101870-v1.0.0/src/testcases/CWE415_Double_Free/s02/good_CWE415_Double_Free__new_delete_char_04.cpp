static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char;
        delete data;
    }
    if(STATIC_CONST_FALSE)
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
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(STATIC_CONST_TRUE)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char;
    }
    if(STATIC_CONST_TRUE)
    {
        delete data;
    }
}
} 
