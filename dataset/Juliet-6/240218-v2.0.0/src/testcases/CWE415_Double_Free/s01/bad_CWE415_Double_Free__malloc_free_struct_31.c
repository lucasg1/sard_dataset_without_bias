void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
<START>
        free(data);
<END>
    }
}
