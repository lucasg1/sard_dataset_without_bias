void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
