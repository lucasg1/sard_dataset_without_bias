void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    goto sink;
sink:
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
