void FUN0(twoIntsStruct * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN0(data);
}
