namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = new int;
    }
    if(5!=5)
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
    int * data;
    data = NULL;
    if(5==5)
    {
        data = new int;
    }
    if(5==5)
    {
        delete data;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = new int[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 
