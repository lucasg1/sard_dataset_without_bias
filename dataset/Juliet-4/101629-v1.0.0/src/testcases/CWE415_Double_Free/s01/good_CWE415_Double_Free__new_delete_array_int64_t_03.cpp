namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
        delete [] data;
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
        delete [] data;
    }
    if(5==5)
    {
        ; 
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
        data = new int64_t[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
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
} 
