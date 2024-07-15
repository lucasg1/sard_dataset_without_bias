static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(staticTrue)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(staticTrue)
    {
        data = "string";
    }
    if(staticTrue)
    {
        printLine(data);
    }
}
