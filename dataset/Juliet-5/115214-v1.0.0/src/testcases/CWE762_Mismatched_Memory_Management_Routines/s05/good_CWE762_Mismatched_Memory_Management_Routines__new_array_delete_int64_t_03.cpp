namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
    }
    if(5!=5)
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
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
    }
    if(5==5)
    {
        delete data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t;
    }
    if(5==5)
    {
        delete data;
    }
}
} 
