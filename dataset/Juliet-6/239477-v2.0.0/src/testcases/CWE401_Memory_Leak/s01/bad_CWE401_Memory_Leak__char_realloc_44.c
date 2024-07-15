void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    funcPtr(data);
}
