static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
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
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
} 
