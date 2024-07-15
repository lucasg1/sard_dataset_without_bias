static char * FUN0(char * data)
{
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    return data;
}
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data = FUN0(data);
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
