void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
