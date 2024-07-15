static char * FUN0(char * data)
{
    data = (char *)calloc(20, sizeof(char));
    return data;
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = FUN0(data);
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
