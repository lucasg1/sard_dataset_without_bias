void FUN0()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
        free(data);
    }
}
