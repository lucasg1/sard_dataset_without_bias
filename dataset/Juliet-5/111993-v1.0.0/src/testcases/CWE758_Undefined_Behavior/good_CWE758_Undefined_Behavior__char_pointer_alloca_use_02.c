void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * data;
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
            data = "string";
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            char * data;
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
            data = "string";
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
        }
    }
}
