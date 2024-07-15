static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
