void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN1(data);
}
void FUN0(char * data)
{
    {
        char dest[50] = "";
<START>
        strcat(dest, data);
<END>
        printLine(data);
        free(data);
    }
}
