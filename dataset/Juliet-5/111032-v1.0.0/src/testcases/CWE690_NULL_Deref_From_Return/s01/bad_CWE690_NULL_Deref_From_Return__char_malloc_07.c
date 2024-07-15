static int staticFive = 5;
void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    if(staticFive==5)
    {
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
