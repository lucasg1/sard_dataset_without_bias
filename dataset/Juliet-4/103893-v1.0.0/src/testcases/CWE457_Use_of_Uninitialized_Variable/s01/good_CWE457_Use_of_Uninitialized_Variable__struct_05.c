static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct data;
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
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN1()
{
    twoIntsStruct data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(staticTrue)
    {
        data.intOne = 1;
        data.intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
    }
}
