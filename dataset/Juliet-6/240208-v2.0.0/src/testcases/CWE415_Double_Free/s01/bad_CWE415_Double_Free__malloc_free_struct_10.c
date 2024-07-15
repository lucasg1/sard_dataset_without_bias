void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalTrue)
    {
        free(data);
    }
}
