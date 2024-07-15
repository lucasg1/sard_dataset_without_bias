twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR2 = data;
    FUN1();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    ; 
}
void FUN1()
{
    twoIntsStruct * data = VAR2;
    free(data);
}
