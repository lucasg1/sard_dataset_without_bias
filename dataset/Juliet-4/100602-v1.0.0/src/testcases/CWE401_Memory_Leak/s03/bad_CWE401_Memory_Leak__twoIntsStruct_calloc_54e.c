void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN4(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN3(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN4(twoIntsStruct * data)
{
<START>
<END>
    ; 
}
