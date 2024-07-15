namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)malloc(20*sizeof(char));
}
void FUN1()
{
    char * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
} 
