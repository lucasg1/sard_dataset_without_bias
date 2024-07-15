void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN1(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    data->intOne = 1;
    data->intTwo = 2;
    FUN3(data);
}
void FUN4(twoIntsStruct * data)
{
<START>
    printStructLine(data);
<END>
    free(data);
}
