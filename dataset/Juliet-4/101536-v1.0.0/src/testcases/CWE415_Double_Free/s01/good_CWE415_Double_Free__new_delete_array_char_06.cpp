static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        delete [] data;
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete [] data;
    }
}
} 
