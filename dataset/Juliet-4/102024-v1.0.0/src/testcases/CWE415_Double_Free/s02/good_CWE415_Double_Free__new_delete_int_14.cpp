namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int;
        delete data;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = new int;
        delete data;
    }
    if(globalFive==5)
    {
        ; 
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
        data = new int;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
} 
