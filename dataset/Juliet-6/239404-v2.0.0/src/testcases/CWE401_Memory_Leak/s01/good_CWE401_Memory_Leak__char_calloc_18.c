void FUN0()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    goto sink;
sink:
    ; 
}
