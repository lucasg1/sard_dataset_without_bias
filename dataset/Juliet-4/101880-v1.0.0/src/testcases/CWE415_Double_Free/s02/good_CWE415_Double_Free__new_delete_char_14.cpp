namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
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
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
        delete data;
    }
    if(globalFive==5)
    {
        ; 
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
} 
