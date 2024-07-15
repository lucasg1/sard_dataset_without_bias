namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        ; 
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        int VAR1;
        data = &VAR1;
        *data = 5;
        printIntLine(*data);
    }
    if(globalFive==5)
    {
        ; 
    }
}
} 
