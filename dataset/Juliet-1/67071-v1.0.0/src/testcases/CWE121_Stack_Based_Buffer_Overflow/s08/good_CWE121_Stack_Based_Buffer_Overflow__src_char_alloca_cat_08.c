static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    if(FUN0())
    {
        memset(data, 'A', 50-1); 
        data[50-1] = '\0'; 
    }
    {
        char dest[50] = "";
        strcat(dest, data);
        printLine(data);
    }
}
