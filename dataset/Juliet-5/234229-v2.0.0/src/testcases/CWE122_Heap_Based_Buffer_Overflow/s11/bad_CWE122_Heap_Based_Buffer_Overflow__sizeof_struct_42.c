static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    data->intOne = 1;
    data->intTwo = 2;
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
    printStructLine(data);
<END>
    free(data);
}
