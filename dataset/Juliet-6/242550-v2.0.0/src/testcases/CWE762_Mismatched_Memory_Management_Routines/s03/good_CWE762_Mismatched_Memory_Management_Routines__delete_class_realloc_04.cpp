static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
    }
    if(STATIC_CONST_TRUE)
    {
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass;
    }
    if(STATIC_CONST_TRUE)
    {
        delete data;
    }
}
} 
