void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)calloc(1, sizeof(twoIntsStruct));
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN2(twoIntsStruct * data)
{
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}
