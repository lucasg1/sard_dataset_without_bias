char * FUN0(char * data)
{
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
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
        strcat(dest, data);
        printLine(data);
        free(data);
    }
}
