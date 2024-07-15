void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        free(data);
<END>
    }
    else
    {
        ; 
    }
}
