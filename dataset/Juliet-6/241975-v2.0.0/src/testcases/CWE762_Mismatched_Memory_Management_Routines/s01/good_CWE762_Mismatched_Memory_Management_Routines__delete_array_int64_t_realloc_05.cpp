static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
} 
