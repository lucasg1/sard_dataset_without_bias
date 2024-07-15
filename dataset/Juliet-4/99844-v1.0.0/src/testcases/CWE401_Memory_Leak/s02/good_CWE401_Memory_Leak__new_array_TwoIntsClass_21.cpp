namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
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
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(TwoIntsClass * data)
{
    if(VAR2)
    {
        delete[] data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(TwoIntsClass * data)
{
    if(VAR3)
    {
        ; 
    }
}
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass VAR4[100];
    data = VAR4;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    VAR3 = 1; 
    FUN4(data);
}
} 
