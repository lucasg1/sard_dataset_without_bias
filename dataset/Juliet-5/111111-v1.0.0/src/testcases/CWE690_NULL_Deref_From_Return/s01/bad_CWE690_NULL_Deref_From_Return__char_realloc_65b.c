void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    funcPtr(data);
}
void FUN0(char * data)
{
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
