twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR0 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
void FUN0()
{
    twoIntsStruct * data = VAR0;
<START>
<END>
    ; 
}
