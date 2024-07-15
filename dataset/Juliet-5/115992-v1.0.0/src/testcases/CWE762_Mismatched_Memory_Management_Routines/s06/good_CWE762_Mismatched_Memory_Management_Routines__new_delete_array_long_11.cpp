namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
    }
    if(globalReturnsFalse())
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
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
} 
