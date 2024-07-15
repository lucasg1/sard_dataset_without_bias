namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(0)
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
    if(1)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(1)
    {
        delete data;
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
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(1)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(1)
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(1)
    {
        ; 
    }
}
} 
