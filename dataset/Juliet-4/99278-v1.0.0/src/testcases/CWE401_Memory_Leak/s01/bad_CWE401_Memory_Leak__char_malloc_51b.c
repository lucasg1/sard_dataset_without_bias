void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
void FUN0(char * data)
{
<START>
<END>
    ; 
}
