void FUN0(char * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
