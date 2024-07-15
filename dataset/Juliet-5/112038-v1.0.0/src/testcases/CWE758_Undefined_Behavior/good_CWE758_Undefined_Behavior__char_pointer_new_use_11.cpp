namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * data;
            data = "string";
            char * * pointer = new char *;
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            char * data;
            data = "string";
            char * * pointer = new char *;
            *pointer = data; 
            {
                char * data = *pointer;
                printLine(data);
            }
            delete pointer;
        }
    }
}
} 
