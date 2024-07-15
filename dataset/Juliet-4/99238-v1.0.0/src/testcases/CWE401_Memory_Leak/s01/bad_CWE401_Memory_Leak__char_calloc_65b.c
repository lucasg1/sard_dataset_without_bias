void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    funcPtr(data);
}
void FUN0(char * data)
{
<START>
<END>
    ; 
}
