namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char * data = dataRef;
        {
            char dest[50] = "";
<START>
            strcpy(dest, data);
<END>
            printLine(data);
            free(data);
        }
    }
}
} 
