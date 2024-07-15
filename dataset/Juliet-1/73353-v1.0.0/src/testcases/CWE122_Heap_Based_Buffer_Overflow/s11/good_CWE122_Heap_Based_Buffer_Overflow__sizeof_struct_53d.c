void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(*data));
    data->intOne = 1;
    data->intTwo = 2;
    FUN0(data);
}
void FUN3(twoIntsStruct * data);
void FUN4(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN3(twoIntsStruct * data)
{
    printStructLine(data);
    free(data);
}
