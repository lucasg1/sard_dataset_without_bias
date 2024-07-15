static int staticFive = 5;
void FUN0()
{
    char * data;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(staticFive==5)
    {
        data = "string";
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}
