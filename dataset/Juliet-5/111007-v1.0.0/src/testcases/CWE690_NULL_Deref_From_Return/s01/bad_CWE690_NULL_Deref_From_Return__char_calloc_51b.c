void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    FUN0(data);
}
void FUN0(char * data)
{
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
