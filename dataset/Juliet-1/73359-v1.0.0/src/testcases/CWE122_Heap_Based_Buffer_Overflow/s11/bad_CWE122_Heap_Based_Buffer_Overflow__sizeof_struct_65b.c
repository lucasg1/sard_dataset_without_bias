void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    funcPtr(data);
}
void FUN0(twoIntsStruct * data)
{
<START>
    printStructLine(data);
<END>
    free(data);
}
