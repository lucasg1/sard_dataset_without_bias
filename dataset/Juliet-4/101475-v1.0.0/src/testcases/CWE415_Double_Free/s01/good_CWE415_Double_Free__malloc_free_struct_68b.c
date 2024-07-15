twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
    VAR2 = data;
    FUN1();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    free(data);
}
void FUN1()
{
    twoIntsStruct * data = VAR2;
    ; 
}
