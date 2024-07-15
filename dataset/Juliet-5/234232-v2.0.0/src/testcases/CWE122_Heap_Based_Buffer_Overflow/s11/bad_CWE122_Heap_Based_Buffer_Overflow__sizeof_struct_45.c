static twoIntsStruct * VAR0;
static twoIntsStruct * VAR1;
void FUN0()
{
    twoIntsStruct * data = VAR0;
    printStructLine(data);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
<START>
    data->intOne = 1;
<END>
    data->intTwo = 2;
    VAR0 = data;
    FUN0();
}
