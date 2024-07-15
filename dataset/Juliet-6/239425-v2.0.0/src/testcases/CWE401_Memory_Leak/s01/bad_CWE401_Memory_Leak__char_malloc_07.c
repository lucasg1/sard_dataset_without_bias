static int staticFive = 5;
void FUN0()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
}
