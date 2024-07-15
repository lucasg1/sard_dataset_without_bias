static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
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
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)calloc(1, sizeof(twoIntsStruct));
    VAR0 = data;
    FUN0();
}
