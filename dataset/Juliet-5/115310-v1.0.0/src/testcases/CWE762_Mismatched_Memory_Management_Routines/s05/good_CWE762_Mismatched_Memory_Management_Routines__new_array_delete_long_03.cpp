namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long[100];
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
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
    }
    if(5==5)
    {
        delete data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = new long;
    }
    if(5==5)
    {
        delete data;
    }
}
} 
