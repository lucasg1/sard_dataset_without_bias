void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
<START>
    printStructLine(data);
<END>
    free(data);
}
