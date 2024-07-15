twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
