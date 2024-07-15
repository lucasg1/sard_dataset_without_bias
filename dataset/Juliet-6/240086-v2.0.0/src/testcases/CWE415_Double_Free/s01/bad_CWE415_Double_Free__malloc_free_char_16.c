void FUN0()
{
    char * data;
    data = NULL;
    while(1)
    {
        data = (char *)malloc(100*sizeof(char));
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
