char * FUN0(char * data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data = FUN0(data);
    {
        char dest[50] = "";
<START>
        SNPRINTF(dest, strlen(data), "%s", data);
<END>
        printLine(data);
        free(data);
    }
}
