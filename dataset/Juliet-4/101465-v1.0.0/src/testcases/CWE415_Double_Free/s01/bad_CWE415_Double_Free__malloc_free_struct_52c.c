void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    free(data);
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
    free(data);
<END>
}
