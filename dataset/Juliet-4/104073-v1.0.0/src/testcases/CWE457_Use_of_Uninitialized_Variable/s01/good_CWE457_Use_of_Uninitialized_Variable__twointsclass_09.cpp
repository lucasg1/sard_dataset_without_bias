namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_FALSE)
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
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN2()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    TwoIntsClass data;
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
} 
