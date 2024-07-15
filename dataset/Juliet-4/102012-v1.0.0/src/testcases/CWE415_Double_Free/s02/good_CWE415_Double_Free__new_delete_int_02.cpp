namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
        delete data;
    }
    if(0)
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
    if(1)
    {
        data = new int;
        delete data;
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
    }
    if(1)
    {
        delete data;
    }
}
} 
