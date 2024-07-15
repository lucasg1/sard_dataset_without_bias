void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    FUN1(data);
}
void FUN0(char * data)
{
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
