static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            char * * pointer = (char * *)ALLOCA(sizeof(char *));
<START>
            char * data = *pointer; 
<END>
            printLine(data);
        }
    }
}
