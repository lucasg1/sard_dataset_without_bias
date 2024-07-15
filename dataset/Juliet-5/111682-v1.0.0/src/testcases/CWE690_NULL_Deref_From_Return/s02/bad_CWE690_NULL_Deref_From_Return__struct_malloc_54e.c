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
void FUN3(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    FUN3(data);
}
void FUN6(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN6(data);
}
void FUN6(twoIntsStruct * data)
{
<START>
    data[0].intOne = 1;
    data[0].intTwo = 1;
<END>
    printStructLine(&data[0]);
    free(data);
}
