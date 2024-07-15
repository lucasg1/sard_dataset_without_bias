static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char data;
            char * pointer = (char *)ALLOCA(sizeof(char));
            data = 5;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
            }
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        {
            char data;
            char * pointer = (char *)ALLOCA(sizeof(char));
            data = 5;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
            }
        }
    }
}
