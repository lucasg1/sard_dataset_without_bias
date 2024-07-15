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
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * data;
            char * * pointer = (char * *)malloc(sizeof(char *));
            if (pointer == NULL) {exit(-1);}
            data = "string";
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
            free(pointer);
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            char * data;
            char * * pointer = (char * *)malloc(sizeof(char *));
            if (pointer == NULL) {exit(-1);}
            data = "string";
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
            free(pointer);
        }
    }
}
