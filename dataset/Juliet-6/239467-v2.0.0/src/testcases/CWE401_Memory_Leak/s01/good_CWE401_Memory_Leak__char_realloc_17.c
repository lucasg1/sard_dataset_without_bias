void FUN0()
{
    int i,k;
    char * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
