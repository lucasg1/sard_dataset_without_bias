namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
static twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR2;
    ; 
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct VAR4;
    data = &VAR4;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR3;
    delete data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    VAR3 = data;
    FUN2();
}
} 
