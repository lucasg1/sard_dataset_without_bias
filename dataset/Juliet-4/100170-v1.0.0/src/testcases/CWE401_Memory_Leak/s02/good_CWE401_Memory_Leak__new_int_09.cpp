namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
} 
