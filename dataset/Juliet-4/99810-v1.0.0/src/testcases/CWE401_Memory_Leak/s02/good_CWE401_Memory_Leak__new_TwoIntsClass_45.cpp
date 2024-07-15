namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    ; 
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass VAR4;
    data = &VAR4;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    TwoIntsClass * data = VAR3;
    delete data;
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    VAR3 = data;
    FUN2();
}
} 
