namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalTrue)
    {
        delete data;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(globalTrue)
    {
        ; 
    }
}
} 
