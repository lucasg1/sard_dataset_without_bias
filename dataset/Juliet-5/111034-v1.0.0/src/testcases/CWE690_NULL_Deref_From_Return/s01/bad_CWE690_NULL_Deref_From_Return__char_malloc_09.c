void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    if(GLOBAL_CONST_TRUE)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
