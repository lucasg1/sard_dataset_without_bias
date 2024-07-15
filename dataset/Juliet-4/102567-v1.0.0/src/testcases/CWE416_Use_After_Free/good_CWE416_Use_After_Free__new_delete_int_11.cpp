namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalReturnsFalse())
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
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(*data);
    }
}
} 
