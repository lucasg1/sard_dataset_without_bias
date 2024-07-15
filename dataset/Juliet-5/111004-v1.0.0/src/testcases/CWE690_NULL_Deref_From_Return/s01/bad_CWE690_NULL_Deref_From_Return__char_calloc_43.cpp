namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)calloc(20, sizeof(char));
}
void FUN1()
{
    char * data;
    data = NULL; 
    FUN0(data);
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
} 
