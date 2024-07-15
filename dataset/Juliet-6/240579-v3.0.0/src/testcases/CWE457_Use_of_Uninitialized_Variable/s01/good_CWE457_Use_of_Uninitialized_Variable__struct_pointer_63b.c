void FUN0(twoIntsStruct * * data);
void FUN1()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
    FUN0(&data);
}
void FUN2(twoIntsStruct * * data);
void FUN3()
{
    twoIntsStruct * data;
    ; 
    FUN2(&data);
}
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
void FUN2(twoIntsStruct * * dataPtr)
{
    *dataPtr = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (*dataPtr  == NULL) {exit(-1);}
    twoIntsStruct * data = *dataPtr;
    data->intOne = 5;
    data->intTwo = 6;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}
