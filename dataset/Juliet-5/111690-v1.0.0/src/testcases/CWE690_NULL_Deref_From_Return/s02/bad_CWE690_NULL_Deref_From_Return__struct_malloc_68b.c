twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    VAR0 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR0;
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}
