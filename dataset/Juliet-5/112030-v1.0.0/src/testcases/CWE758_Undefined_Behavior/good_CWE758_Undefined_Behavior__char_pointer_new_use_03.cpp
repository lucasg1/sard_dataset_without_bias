namespace NAMESPACE0
{
void FUN0()
{
    if(5!=5)
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
    if(5==5)
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
