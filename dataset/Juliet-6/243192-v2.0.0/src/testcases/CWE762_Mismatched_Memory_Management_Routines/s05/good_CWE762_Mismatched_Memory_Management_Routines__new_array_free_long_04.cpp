static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long[100];
    }
    if(STATIC_CONST_FALSE)
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
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
} 
