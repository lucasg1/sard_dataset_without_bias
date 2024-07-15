void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
