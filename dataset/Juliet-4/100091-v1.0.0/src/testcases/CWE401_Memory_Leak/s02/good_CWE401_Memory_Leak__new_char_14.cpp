namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
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
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalFive==5)
    {
        delete data;
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
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalFive==5)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
    }
    if(globalFive==5)
    {
        ; 
    }
}
} 
