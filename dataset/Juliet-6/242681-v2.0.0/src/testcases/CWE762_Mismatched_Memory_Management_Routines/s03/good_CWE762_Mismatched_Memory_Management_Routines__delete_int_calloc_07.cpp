static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
} 
