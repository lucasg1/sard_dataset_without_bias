namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0'; 
    {
        char * data = dataRef;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            strcat(data, source);
<END>
            printLine(data);
            free(data);
        }
    }
}
} 
