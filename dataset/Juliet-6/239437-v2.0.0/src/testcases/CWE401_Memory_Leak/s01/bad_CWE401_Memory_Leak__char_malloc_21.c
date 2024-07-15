static int VAR0 = 0;
void FUN0(char * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    VAR0 = 1; 
    FUN0(data);
}
