void FUN0()
{
    char * data;
    data = NULL;
    if(5==5)
    {
        data = (char *)malloc(100*sizeof(char));
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
