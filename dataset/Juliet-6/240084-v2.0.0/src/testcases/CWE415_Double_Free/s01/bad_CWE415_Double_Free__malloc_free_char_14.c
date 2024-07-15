void FUN0()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalFive==5)
    {
        free(data);
    }
}
