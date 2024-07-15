static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = (long *)malloc(100*sizeof(long));
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
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
} 
