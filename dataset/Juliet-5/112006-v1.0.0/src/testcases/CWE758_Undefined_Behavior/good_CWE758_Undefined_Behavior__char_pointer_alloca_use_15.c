void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
