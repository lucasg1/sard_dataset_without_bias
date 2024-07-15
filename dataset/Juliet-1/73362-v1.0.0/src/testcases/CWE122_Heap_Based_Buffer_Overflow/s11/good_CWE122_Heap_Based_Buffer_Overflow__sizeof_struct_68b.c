twoIntsStruct * VAR0;
twoIntsStruct * VAR1;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(*data));
    data->intOne = 1;
    data->intTwo = 2;
    VAR1 = data;
    FUN0();
}
extern twoIntsStruct * VAR0;
extern twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR1;
    printStructLine(data);
    free(data);
}
