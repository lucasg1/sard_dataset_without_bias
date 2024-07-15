static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    ; 
}
void FUN1()
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
void FUN2()
{
    twoIntsStruct * data = VAR2;
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR2 = data;
    FUN2();
}
