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
        delete data;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalTrue)
    {
        ; 
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
        data = new int;
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}
} 
