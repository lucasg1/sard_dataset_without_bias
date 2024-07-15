static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = "string";
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}
