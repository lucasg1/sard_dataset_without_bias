static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    twoIntsStruct data;
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN1()
{
    twoIntsStruct data;
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN2()
{
    twoIntsStruct data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(STATIC_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
