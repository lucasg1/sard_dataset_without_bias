void FUN0()
{
    int i,j;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    for(j = 0; j < 1; j++)
    {
        free(data);
    }
}
