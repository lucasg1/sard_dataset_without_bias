void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    FUN0(data);
}
void FUN0(twoIntsStruct * data)
{
<START>
    printStructLine(data);
<END>
    free(data);
}
