void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)malloc(100*sizeof(char));
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
