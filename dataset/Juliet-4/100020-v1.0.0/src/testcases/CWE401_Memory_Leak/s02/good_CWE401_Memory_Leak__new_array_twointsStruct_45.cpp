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
    twoIntsStruct VAR4[100];
    data = VAR4;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR3;
    delete[] data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR3 = data;
    FUN2();
}
} 
