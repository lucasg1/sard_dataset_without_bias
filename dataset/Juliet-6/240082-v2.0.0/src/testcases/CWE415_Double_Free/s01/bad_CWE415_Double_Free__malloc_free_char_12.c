void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
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
