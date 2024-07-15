void FUN0()
{
    char * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = "string";
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLine(data);
    }
}
