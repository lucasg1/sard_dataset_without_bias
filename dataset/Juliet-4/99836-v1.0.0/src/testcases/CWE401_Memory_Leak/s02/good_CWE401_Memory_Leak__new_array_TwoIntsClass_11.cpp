namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
    }
    if(globalReturnsTrue())
    {
        delete[] data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        TwoIntsClass VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        TwoIntsClass VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
} 
