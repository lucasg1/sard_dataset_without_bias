void FUN0(char * data)
{
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    funcPtr(data);
}
