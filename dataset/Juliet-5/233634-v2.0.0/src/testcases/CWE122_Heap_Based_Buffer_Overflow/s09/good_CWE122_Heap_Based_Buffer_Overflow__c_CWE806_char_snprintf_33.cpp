namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char * data = dataRef;
        {
            char dest[50] = "";
            SNPRINTF(dest, strlen(data), "%s", data);
            printLine(data);
            free(data);
        }
    }
}
} 
