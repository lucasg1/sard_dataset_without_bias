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
    void (*funcPtr) (char *) = FUN0;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    funcPtr(data);
}
