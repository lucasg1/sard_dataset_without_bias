static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * * pointer = (char * *)malloc(sizeof(char *));
            if (pointer == NULL) {exit(-1);}
<START>
            char * data = *pointer; 
<END>
            free(pointer);
            printLine(data);
        }
    }
}
