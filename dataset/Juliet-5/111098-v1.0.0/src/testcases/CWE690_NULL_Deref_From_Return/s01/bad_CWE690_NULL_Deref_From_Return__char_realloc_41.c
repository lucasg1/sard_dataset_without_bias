void FUN0(char * data)
{
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    FUN0(data);
}
