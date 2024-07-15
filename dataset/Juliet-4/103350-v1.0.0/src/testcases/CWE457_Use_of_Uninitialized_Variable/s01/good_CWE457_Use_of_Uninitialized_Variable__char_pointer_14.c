void FUN0()
{
    char * data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(globalFive==5)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(globalFive==5)
    {
        data = "string";
    }
    if(globalFive==5)
    {
        printLine(data);
    }
}
