static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete [] data;
    }
}
} 
