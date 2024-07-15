void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
