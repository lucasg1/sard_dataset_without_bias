void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(1)
    {
        free(data);
    }
}
