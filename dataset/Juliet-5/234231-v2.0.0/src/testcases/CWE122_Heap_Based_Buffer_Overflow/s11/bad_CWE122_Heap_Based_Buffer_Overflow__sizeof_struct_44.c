void FUN0(twoIntsStruct * data)
{
    printStructLine(data);
    free(data);
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
<START>
    data->intOne = 1;
<END>
    data->intTwo = 2;
    funcPtr(data);
}
