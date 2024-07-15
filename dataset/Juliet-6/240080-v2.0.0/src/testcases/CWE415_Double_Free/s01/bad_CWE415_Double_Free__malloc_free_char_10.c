void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
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
