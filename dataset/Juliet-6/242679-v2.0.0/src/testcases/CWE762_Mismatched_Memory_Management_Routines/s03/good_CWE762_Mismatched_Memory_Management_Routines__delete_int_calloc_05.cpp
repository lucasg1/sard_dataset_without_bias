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
        data = (int *)calloc(100, sizeof(int));
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
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
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
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
    }
    if(staticTrue)
    {
        delete data;
    }
}
} 
