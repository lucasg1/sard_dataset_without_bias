void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    goto sink;
sink:
    free(data);
}
