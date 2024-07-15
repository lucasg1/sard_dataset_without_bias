static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
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
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t[100];
    }
    if(STATIC_CONST_TRUE)
    {
        delete [] data;
    }
}
} 
