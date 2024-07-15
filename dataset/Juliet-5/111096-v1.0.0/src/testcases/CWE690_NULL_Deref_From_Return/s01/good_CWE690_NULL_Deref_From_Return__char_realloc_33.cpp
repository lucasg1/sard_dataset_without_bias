namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    {
        char * data = dataRef;
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
} 
