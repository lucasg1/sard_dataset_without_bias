static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
