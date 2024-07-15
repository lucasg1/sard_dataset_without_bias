void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(5==5)
    {
        free(data);
    }
}
