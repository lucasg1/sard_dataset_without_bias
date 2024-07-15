void FUN0()
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
